
        
              # Initialize a new instance
      #
      # @param [Sandbox] sandbox see #sandbox
      # @param [String] sandbox_root see #sandbox_root
      # @param [Xcodeproj::Project] pods_project see #pods_project
      # @param [Array<UmbrellaTargetDescription>] umbrella_targets see #umbrella_targets
      #
      def initialize(sandbox, sandbox_root, pods_project, umbrella_targets)
        @sandbox = sandbox
        @sandbox_root = sandbox_root
        @pods_project = pods_project
        @umbrella_targets = umbrella_targets
      end
    
          # Initialize a new instance
      #
      # @param  [PodTarget, AggregateTarget] target @see target
      #
      def initialize(target)
        @target = target
        @headers = [
          Header.new(target.umbrella_header_path.basename, true),
        ]
      end
    
            it 'returns non vendored framework input and output paths by config' do
          @pod_target.stubs(:should_build?).returns(true)
          @pod_target.stubs(:build_type).returns(Target::BuildType.dynamic_framework)
          @target.framework_paths_by_config['Debug'].should == [
            Target::FrameworkPaths.new('${BUILT_PRODUCTS_DIR}/BananaLib/BananaLib.framework'),
          ]
          @target.framework_paths_by_config['Release'].should == [
            Target::FrameworkPaths.new('${BUILT_PRODUCTS_DIR}/BananaLib/BananaLib.framework'),
          ]
        end
    
            if language == :swift
          source_file = project.path.dirname.+('#{name}/main.swift')
          source_file.parent.mkpath
          import_statement = pod_target.should_build? && pod_target.defines_module? ? 'import #{pod_target.product_module_name}\n' : ''
          source_file.open('w') { |f| f << import_statement }
        else
          source_file = project.path.dirname.+('#{name}/main.m')
          source_file.parent.mkpath
          import_statement = if pod_target.should_build? && pod_target.defines_module?
                               '@import #{pod_target.product_module_name};\n'
                             else
                               header_name = '#{pod_target.product_module_name}/#{pod_target.product_module_name}.h'
                               if pod_target.sandbox.public_headers.root.+(header_name).file?
                                 '#import <#{header_name}>\n'
                               else
                                 ''
                               end
                             end
          source_file.open('w') do |f|
            f << '@import Foundation;\n'
            f << '@import UIKit;\n' if platform == :ios || platform == :tvos
            f << '@import Cocoa;\n' if platform == :osx
            f << '#{import_statement}int main() {}\n'
          end
        end
        source_file
      end
    
              it 'saves the xcconfig' do
            path = temporary_directory + 'sample.xcconfig'
            @generator.save_as(path)
            generated = Xcodeproj::Config.new(path)
            generated.class.should == Xcodeproj::Config
          end
    
            # @return [Hash<String, TargetInstallationResult>] pod_target_installation_results
        #         Hash of pod target name to installation results.
        #
        attr_reader :pod_target_installation_results
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
    ERR
      end
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
      # Returns a title cased string based on John Gruber's title case http://daringfireball.net/2008/08/title_case_update
  def titlecase(input)
    input.titlecase
  end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end