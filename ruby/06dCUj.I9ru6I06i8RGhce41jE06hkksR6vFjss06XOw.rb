
        
            # Horizontal adding around the frames
    def horizontal_frame_padding
      padding = fetch_config['padding']
      if padding.kind_of?(String) && padding.split('x').length == 2
        padding = padding.split('x')[0]
        padding = padding.to_i unless padding.end_with?('%')
      end
      return scale_padding(padding)
    end
    
          screenshots = Dir.glob('#{path}/**/*.{png,PNG}').uniq # uniq because thanks to {png,PNG} there are duplicates
    
            # Instantiate object and inflate relationships
        relationships = model_data['relationships'] || []
        type_instance = type_class.new(id, attributes)
        type_instance = inflate_model_relationships(type_instance, relationships, included)
    
          attr_mapping({
        'installCount' => 'install_count',
        'crashCount' => 'crash_count',
        'sessionCount' => 'session_count',
        'betaTesterState' => 'beta_tester_state',
        'lastModifiedDate' => 'last_modified_date',
        'installedCfBundleShortVersionString' => 'installed_cf_bundle_short_version_string',
        'installedCfBundleVersion' => 'installed_cf_bundle_version'
      })
    
          def self.type
        return 'bundleIds'
      end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
        def self.verify_xcode_license_approved!
      if `/usr/bin/xcrun clang 2>&1` =~ /license/ && !$?.success?
        raise Informative, 'You have not agreed to the Xcode license, which ' \
          'you must do to use CocoaPods. Agree to the license by running: ' \
          '`xcodebuild -license`.'
      end
    end
  end
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
    
            # Initialize a new instance from its attributes.
        #
        # @param [Array<Specification>] specs      @see #specs
        # @param [Array<Specification>] test_specs @see #test_specs
        # @param [Array<Specification>] app_specs  @see #app_specs
        # @param [Platform] platform               @see #platform
        # @param [Target::BuildType] build_type    @see #build_type
        #
        def initialize(specs, test_specs, app_specs, platform, build_type = Target::BuildType.static_library)
          @specs = specs
          @test_specs = test_specs
          @app_specs = app_specs
          @platform = platform
          @build_type = build_type
          @hash = [specs, platform, build_type].hash
        end
    
            # @private
        # @return [Hash<PodVariant, String>]
        #
        def scope_by_build_type
          scope_if_necessary(group_by { |v| v.build_type.packaging }.map(&:scope_by_linkage)) do |variant|
            variant.build_type.packaging
          end
        end
    
      def self.reset_config_instance
    ::Pod::Config.instance = nil
    ::Pod::Config.instance.tap do |c|
      c.verbose           =  false
      c.silent            =  true
      c.repos_dir         =  fixture('spec-repos')
      c.installation_root =  SpecHelper.temporary_directory
      c.cache_root        =  SpecHelper.temporary_directory + 'Cache'
    end
  end
end
    
        it 'escapes double quotes properly for module map contents' do
      path = temporary_directory + 'BananaLib.modulemap'
      @pod_target.stubs(:umbrella_header_path).returns(Pathname.new('BananaLibWith'Quotes'-umbrella.h'))
      @pod_target.stubs(:build_type => Target::BuildType.dynamic_framework)
      gen = Generator::ModuleMap.new(@pod_target)
      gen.save_as(path)
      path.read.should == <<-EOS.strip_heredoc
        framework module BananaLib {
          umbrella header 'BananaLibWith\\'Quotes\\'-umbrella.h'
    }
    
          it 'returns scopes by built types if they qualify' do
        variants = PodVariantSet.new([
          PodVariant.new([@root_spec], [], [], Platform.ios, Target::BuildType.dynamic_framework),
          PodVariant.new([@root_spec], [], [], Platform.ios),
        ])
        variants.scope_suffixes.values.should == %w(framework library)
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
    
              states.flat_map do |state|
            send(state).sort.map do |pod|
              prefixes[state.to_sym] + ' #{pod}'
            end
          end
        end
      end
    end
  end
end

    
            def correct(processed_source, node)
          return if %i[kwarg kwoptarg].include?(node.type)
    
            # If there's a containing breakable collection on the same
        # line, we let that one get broken first. In a separate pass,
        # this one might get broken as well, but to avoid conflicting
        # or redundant edits, we only mark one offense at a time.
        return true if contained_by_breakable_collection_on_same_line?(node)
    
            def extract_heredoc(node)
          return node if heredoc_node?(node)
          return node.receiver if single_line_send_with_heredoc_receiver?(node)
    
              check(node, node.arguments, 'parameter of %<article>s method call',
                node.last_argument.source_range.end_pos,
                node.source_range.end_pos)
        end
        alias on_csend on_send
    
        context 'when EnforcedStyle is empty_lines for #{open} #{close} block' do
      let(:cop_config) { { 'EnforcedStyle' => 'empty_lines' } }
    
          it { expect(if_node.nested_conditional?).to be_truthy }
    end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      describe '::load' do
    let(:path) { File.expand_path('../../../fixtures/sample.yml', __FILE__) }
    let(:options) { {} }
    
          # The first pathname of the project named 'name' found while
      # recursively searching 'directory'
      def project_in(directory, name)
        return nil if String(directory).empty?
        projects = Dir.glob('#{directory}/**/*.{yml,yaml}').sort
        projects.detect { |project| File.basename(project, '.*') == name }
      end
    end
  end
end
