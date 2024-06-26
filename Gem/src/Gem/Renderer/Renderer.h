#pragma once
#include "Gem/Core/Core.h"

#include "RenderCommand.h"
#include "OrthographicCamera.h"
#include "Shader.h"

namespace Gem
{
	class GEM_API Renderer
	{
	public:
		static void Init();
		static void OnWindowResize(unsigned int width, unsigned int height);

		static void BeginScene(OrthographicCamera& camera);
		static void EndScene();

		static void Submit(const Gem::Ref<Shader>& shader, const Gem::Ref<VertexArray>& vertexArray, const glm::mat4& transform = glm::mat4(1.0f));

		inline static RendererAPI::API GetAPI() { return RendererAPI::GetAPI(); }
	private:
		struct SceneData
		{
			glm::mat4 ViewProjectionMatrix;
		};

		static Scope<SceneData> s_SceneData;
	};
}