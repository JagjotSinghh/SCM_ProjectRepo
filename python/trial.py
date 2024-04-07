import openai

# Set your OpenAI API key
openai.api_key = ''

# Your prompt or input text
prompt = "Once upon a time,"

# Make an API request
response = openai.Completion.create(
    engine="text-davinci-003",  # Choose the GPT model/engine
    prompt=prompt,
    max_tokens=150,  # Adjust the length of the generated text
    n=1,  # Number of completions to generate
    stop=None,  # You can specify a stopping point for the generated text
)

# Get and print the generated text
generated_text = response['choices'][0]['text']
print(generated_text)
