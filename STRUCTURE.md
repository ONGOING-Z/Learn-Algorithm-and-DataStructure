# 项目结构说明

## 🎯 优化目标

本次重构的主要目标：
1. **清晰的层次结构** - 按功能和内容类型分类
2. **一致的命名规范** - 统一使用英文目录名
3. **逻辑分离** - 理论、实现、练习分开管理
4. **易于导航** - 直观的目录结构便于查找

## 📋 详细结构

### 📚 docs/ - 文档中心
```
docs/
├── theory/           # 理论知识
│   ├── data-structures.md    # 数据结构详解（原 data-structure.md）
│   ├── algorithms.md         # 算法理论
│   └── complexity.md         # 复杂度分析
├── guides/           # 学习指南
└── assets/           # 图片资源（原 images/）
```

### 💻 src/ - 源代码
```
src/
├── data-structures/  # 数据结构实现
│   ├── cpp/         # C++ 实现（整合原 other/ 内容）
│   ├── java/        # Java 实现
│   └── python/      # Python 实现
├── algorithms/       # 算法实现
│   ├── sorting/     # 排序算法
│   ├── searching/   # 搜索算法
│   └── graph/       # 图算法
└── utilities/        # 工具函数（原 snippets/）
```

### 🏃 practice/ - 练习实战
```
practice/
├── online-judges/    # 在线评判（原 OJ/）
│   ├── LeetCode/    # LeetCode 题目
│   ├── hackerearth/ # HackerEarth 题目
│   └── PAT/         # PAT 考试题目
└── snippets/         # 练习代码片段
```

### 🛠️ tools/ - 工具脚本
```
tools/
└── c_md.sh          # 构建脚本（原根目录）
```

## 🔄 迁移说明

### 已完成的迁移
- ✅ `images/` → `docs/assets/`
- ✅ `data-structure.md` → `docs/theory/data-structures.md`
- ✅ `OJ/` → `practice/online-judges/`
- ✅ `snippets/` → `src/utilities/`
- ✅ `other/` → `src/data-structures/cpp/`
- ✅ `doc/` → `docs/theory/`
- ✅ `c_md.sh` → `tools/`

### 路径更新
- ✅ 更新了 `data-structures.md` 中的图片路径
- ✅ 更新了 GitBook 配置文件

## 📖 使用指南

### 对于学习者
1. 从 `docs/theory/data-structures.md` 开始学习理论
2. 查看 `src/` 中对应的代码实现
3. 在 `practice/` 中找相关练习题巩固

### 对于贡献者
1. 理论文档放在 `docs/theory/`
2. 代码实现按语言放在 `src/data-structures/` 或 `src/algorithms/`
3. 练习题解答放在 `practice/` 对应平台目录

## 🎉 优化效果

- **更清晰的导航**: 内容按类型明确分类
- **更好的可维护性**: 相关文件集中管理
- **更强的扩展性**: 新内容有明确的归属位置
- **更佳的用户体验**: 符合常见项目结构约定