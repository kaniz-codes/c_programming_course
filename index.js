import { readdir, rename } from 'fs/promises'

const getFiles = async source =>
	(await readdir(source, { withFileTypes: true }))
		.filter(dirent => dirent.isFile())
		.map(dirent => [dirent.parentPath, dirent.name])

async function i() {
	const a = await getFiles('D:/code2024/c_programming_course')
	a.length = a.length - 4
	for (let item of a) {
		const n1 = `${item[0]}/${item[1]
			.replaceAll(' ', '-')
			.replaceAll(',', '-')
			.replaceAll(' ', '-')
			.replaceAll('_', '')}`
		await rename(`${item[0]}/${item[1]}`, n1)
		await rename(n1, `${n1}.c`)
	}
}
i()