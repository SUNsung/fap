# -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
    Jekyll::PluginManager.require_from_bundler
    
          def print_feature_element_name(feature_element)
        @io.print '\n#{feature_element.location}  Scenario: #{feature_element.name} '
        @io.flush
      end
    
            def connect(websocket, handshake)
          @connections_count += 1
          if @connections_count == 1
            message = 'Browser connected'
            message += ' over SSL/TLS' if handshake.secure?
            Jekyll.logger.info 'LiveReload:', message
          end
          websocket.send(
            JSON.dump(
              :command    => 'hello',
              :protocols  => ['http://livereload.com/protocols/official-7'],
              :serverName => 'jekyll'
            )
          )
    
          def unlocked_pods
        @unlocked_pods ||= begin
          pods = []
          UI.titled_section('Analyzing dependencies') do
            pods = Installer::Analyzer.new(config.sandbox, config.podfile).
              analyze(:outdated).
              specs_by_target.values.flatten.uniq
          end
          pods
        end
      end
    
      module Generator
    autoload :Acknowledgements,        'cocoapods/generator/acknowledgements'
    autoload :Markdown,                'cocoapods/generator/acknowledgements/markdown'
    autoload :Plist,                   'cocoapods/generator/acknowledgements/plist'
    autoload :BridgeSupport,           'cocoapods/generator/bridge_support'
    autoload :Constant,                'cocoapods/generator/constant'
    autoload :CopyResourcesScript,     'cocoapods/generator/copy_resources_script'
    autoload :DummySource,             'cocoapods/generator/dummy_source'
    autoload :EmbedFrameworksScript,   'cocoapods/generator/embed_frameworks_script'
    autoload :FileList,                'cocoapods/generator/file_list'
    autoload :Header,                  'cocoapods/generator/header'
    autoload :InfoPlistFile,           'cocoapods/generator/info_plist_file'
    autoload :ModuleMap,               'cocoapods/generator/module_map'
    autoload :PrefixHeader,            'cocoapods/generator/prefix_header'
    autoload :UmbrellaHeader,          'cocoapods/generator/umbrella_header'
    autoload :AppTargetHelper,         'cocoapods/generator/app_target_helper'
  end
    
            # @return [Hash{String=>Symbol}] A hash representing all the user build
        #         configurations across all integration targets. Each key
        #         corresponds to the name of a configuration and its value to
        #         its type (`:debug` or `:release`).
        #
        attr_reader :build_configurations
    
            if podspecs.size <= 1
          result += [license, readme, podspecs, docs]
        else
          # Manually add non-globbing files since there are multiple podspecs in the same folder
          result << podspec_file
          if license_file = spec_license
            absolute_path = root + license_file
            result << absolute_path if File.exist?(absolute_path)
          end
        end
        result.compact.flatten.sort
      end
    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
          context 'when the plugin doesnt exist' do
        it 'fails to install and report an error' do
          command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-output-impossible-plugin')
          expect(command.stderr).to match(/Plugin not found, aborting/)
        end
      end
    end
  end
end
