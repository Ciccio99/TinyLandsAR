// Upgrade NOTE: replaced '_World2Object' with 'unity_WorldToObject'

// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "TerrainShader" {
	Properties {
		_Color1("Color 1", Color) = (1.0, 1.0, 1.0, 1.0)
		_Range1("Range 1", Float) = 0.0
		_Color2("Color 2", Color) = (1.0, 1.0, 1.0, 1.0)
		_Range2("Range 2", Float) = 0.0
		_Color3("Color 3", Color) = (1.0, 1.0, 1.0, 1.0)
		_Range3("Range 3", Float) = 0.0
		_Color4("Color 4", Color) = (1.0, 1.0, 1.0, 1.0)
		_Range4("Range 4", Float) = 0.0
		_Color5("Color 5", Color) = (1.0, 1.0, 1.0, 1.0)
		_Range5("Range 5", Float) = 0.0
		_Color6("Color 6", Color) = (1.0, 1.0, 1.0, 1.0)
		_Range6("Range 6", Float) = 0.0
		_Color7("Color 7", Color) = (1.0, 1.0, 1.0, 1.0)
		_Range7("Range 7", Float) = 0.0
		_Color8("Color 8", Color) = (1.0, 1.0, 1.0, 1.0)
		_Range8("Range 8", Float) = 0.0
		_MaxHeight("Max Height", Float) = 0.0
		_MinHeight("Min Height", Float) = 0.0

	}
	SubShader {
		Tags {"RenderType" = "Opaque"}
		LOD 200

		CGPROGRAM
		#pragma surface surf Lambert

		float4 _Color1;
		float4 _Color2;
		float4 _Color3;
		float4 _Color4;
		float4 _Color5;
		float4 _Color6;
		float4 _Color7;
		float4 _Color8;
		float _Range1;
		float _Range2;
		float _Range3;
		float _Range4;
		float _Range5;
		float _Range6;
		float _Range7;
		float _Range8;
		float _MaxHeight;
		float _MinHeight;
	
		struct Input {
			float3 worldNormal;
			float3 worldPos;
			INTERNAL_DATA
		};

		void surf (Input IN, inout SurfaceOutput o) {
			float normHeight = (IN.worldPos[1] - _MinHeight) / (_MaxHeight - _MinHeight);

			if (normHeight < _Range1) 
				o.Albedo = _Color1;
			else if (normHeight >= _Range1 && normHeight < _Range2)
				o.Albedo = _Color2;
			else if (normHeight >= _Range2 && normHeight < _Range3)
				o.Albedo = _Color3;
			else if (normHeight >- _Range3 && normHeight < _Range4)
				o.Albedo = _Color4;
			else if (normHeight >= _Range4 && normHeight < _Range5)
				o.Albedo = _Color5;
			else if (normHeight >= _Range5 && normHeight < _Range6)
				o.Albedo = _Color6;
			else if (normHeight >= _Range6 && normHeight < _Range7)
				o.Albedo = _Color7;
			else if (normHeight >= _Range7)
				o.Albedo = _Color8;
			
			o.Alpha = 1;
		}

		ENDCG
	}
	Fallback "Diffuse"
}
