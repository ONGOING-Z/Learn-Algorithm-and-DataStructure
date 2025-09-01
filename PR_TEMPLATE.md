# feat: 优化项目组织结构

## 🎯 优化目标

本次重构主要优化项目的组织结构，提高代码的可维护性和可读性。

## 🔄 主要变更

### 目录重组
- **docs/** - 统一文档管理
  - `theory/` - 理论知识（原 data-structure.md 等）
  - `assets/` - 图片资源（原 images/）
- **src/** - 源代码实现
  - `data-structures/` - 按语言分类的数据结构实现
  - `algorithms/` - 算法实现
  - `utilities/` - 工具函数（原 snippets/）
- **practice/** - 练习与实战
  - `online-judges/` - 在线评判平台题目（原 OJ/）
- **tools/** - 构建脚本和工具

### 具体迁移
- ✅ `images/` → `docs/assets/`
- ✅ `data-structure.md` → `docs/theory/data-structures.md`
- ✅ `OJ/` → `practice/online-judges/`
- ✅ `snippets/` → `src/utilities/`
- ✅ `other/` → `src/data-structures/cpp/`
- ✅ `doc/` → `docs/theory/`
- ✅ `c_md.sh` → `tools/`

### 文档更新
- 更新了所有图片路径引用
- 创建了各目录的 README 说明
- 添加了详细的 STRUCTURE.md 文档
- 更新了主 README.md
- 修正了 GitBook 配置

## 🎉 优化效果

- **更清晰的导航**: 内容按类型明确分类
- **更好的可维护性**: 相关文件集中管理
- **更强的扩展性**: 新内容有明确的归属位置
- **更佳的用户体验**: 符合常见项目结构约定

## 📊 影响范围

### 文件移动统计
- 移动了 300+ 个文件到新的目录结构
- 更新了所有相关的路径引用
- 保持了完整的Git历史记录

### 新增文件
- `STRUCTURE.md` - 详细的结构说明文档
- `docs/README.md` - 文档目录说明
- `src/README.md` - 源代码目录说明
- `practice/README.md` - 练习目录说明

## 📖 详细说明

请查看新增的 `STRUCTURE.md` 文件了解完整的迁移说明和使用指南。

## ✅ 测试确认

- [x] 所有文件路径引用已更新
- [x] GitBook 配置已修正
- [x] 目录结构符合预期
- [x] 文档链接正常工作
- [x] 保持了完整的Git历史

## 🔗 相关链接

- 分支: `cursor/optimize-organizational-structure-474c`
- 目标分支: `dev`
- 详细文档: [STRUCTURE.md](./STRUCTURE.md)