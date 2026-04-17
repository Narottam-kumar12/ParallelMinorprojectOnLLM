# 🚀 GPT from Scratch — Full Transformer Architecture Implementation

> End-to-end implementation of a **complete Transformer-based GPT model**, built from first principles — no black boxes.

---

## 📌 Overview

This project implements a **full Transformer architecture** inspired by GPT models, covering every component from **data preprocessing to autoregressive text generation**.

Unlike simplified demos, this project includes a **production-grade modular pipeline**, replicating the core ideas behind modern LLMs using:

* Multi-head self-attention
* Positional embeddings
* Layer normalization (Pre-LN)
* Residual connections
* Autoregressive decoding

The goal is not just to use Transformers — but to **understand and build every layer of them**.

---

## 🧠 What Makes This “Complete Transformer”?

This project includes **all essential building blocks of a real GPT model**:

### ✅ Core Components Implemented

* Token Embeddings
* Positional Embeddings
* Multi-Head Self-Attention
* Causal Masking (Decoder-only behavior)
* Feedforward Neural Network (FFN)
* GELU Activation
* Layer Normalization (Pre-LN)
* Residual (Skip) Connections
* Stacked Transformer Blocks
* Output Projection (Logits Layer)

---

## 🏗️ Full Architecture Pipeline

```id="arch-flow"
Input Text
   ↓
Text Preprocessing
   ↓
Tokenization (Custom + BPE)
   ↓
Token IDs
   ↓
Token Embeddings + Positional Embeddings
   ↓
┌───────────────────────────────┐
│   Transformer Block × N       │
│                               │
│  LayerNorm                    │
│     ↓                         │
│  Multi-Head Attention         │
│     ↓                         │
│  Residual Connection          │
│     ↓                         │
│  LayerNorm                    │
│     ↓                         │
│  Feed Forward Network (FFN)   │
│     ↓                         │
│  Residual Connection          │
└───────────────────────────────┘
   ↓
Final LayerNorm
   ↓
Linear Projection (to vocab)
   ↓
Softmax Probabilities
   ↓
Next Token Prediction
```

---

## ⚙️ Tech Stack

| Category     | Tools           |
| ------------ | --------------- |
| Language     | Python          |
| Framework    | PyTorch         |
| Tokenization | TikToken        |
| Training     | AdamW Optimizer |
| Hardware     | CPU / GPU       |

---

## 🔬 Model Configuration

| Parameter           | Value                                |
| ------------------- | ------------------------------------ |
| Architecture        | Decoder-only Transformer (GPT-style) |
| Layers              | 12                                   |
| Heads               | 12                                   |
| Embedding Dimension | 768                                  |
| Context Length      | 256                                  |
| Vocabulary Size     | 50,257                               |
| Dropout             | 0.1                                  |

---

## ⚡ Key Features

### 🔤 Advanced Tokenization

* Custom Tokenizer (V1, V2)
* Special Tokens: `<|unk|>`, `<|endoftext|>`
* Byte Pair Encoding (BPE)

### 🧠 Attention Mechanism

* Scaled Dot-Product Attention
* Multi-Head Attention
* Causal Masking (no future leakage)

### 🔁 Training Strategy

* Objective: Next Token Prediction
* Loss: Cross-Entropy
* Optimizer: AdamW
* Metric: Perplexity

### ✍️ Text Generation

* Greedy Decoding
* Temperature Sampling
* Top-K Sampling

---

## 📊 Results & Insights

* Training Loss: **9.78 → 0.39**
* Model learns:

  * Sentence structure
  * Grammar
  * Writing style

### ⚠️ Observations

* Overfitting due to small dataset
* High coherence in later epochs
* Style imitation achieved

---

## 🧪 Dataset

* Source: *The Verdict* — Edith Wharton
* Tokens: ~5K
* Train/Test Split: 90/10

---

## ▶️ Usage

### Clone Repo

```bash
git clone https://github.com/your-username/gpt-from-scratch.git
cd gpt-from-scratch
```

### Install Dependencies

```bash
pip install -r requirements.txt
```

### Train Model

```bash
python train.py
```

### Generate Text

```bash
python generate.py
```

---

## 🧑‍💻 Contributors

* **Narottam Kumar** — Data pipeline, tokenization
* **Sandeep Kumar** — Transformer & training
* **Adarsh Srivastava** — Integration & inference

---

## 🚧 Limitations

* Small dataset → Overfitting
* Limited generalization
* No large-scale pretraining

---

## 🔮 Future Enhancements

* Train on large corpus
* Implement BPE from scratch
* Add LR scheduler (cosine decay)
* Instruction fine-tuning
* RLHF integration
* Multi-modal Transformer

---

## 📚 References

* Vaswani et al. — *Attention is All You Need*
* Radford et al. — *GPT*
* Brown et al. — *GPT-3*

---

## ⭐ Key Takeaway

> This project demonstrates that a **complete Transformer architecture can be built, trained, and understood from scratch** — without requiring massive infrastructure.

---

