import { readdir, rename } from 'fs/promises'

const getFiles = async source =>
	(await readdir(source, { withFileTypes: true }))
		.filter(dirent => dirent.isFile())
		.map(dirent => [dirent.parentPath, dirent.name])

async function i() {
	const a = await getFiles('D:/code2024/c_programming_course')
	a.length = a.length - 3
	for (let item of a) await rename(`${item[0]}/${item[1]}`, `${item[0]}/${item[1].toLowerCase()}`)
}
i()