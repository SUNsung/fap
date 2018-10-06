
        
              self.runner.add_lane(Lane.new(platform: self.current_platform,
                                       block: block,
                                 description: desc_collection,
                                        name: lane_name,
                                  is_private: false), true)
    
          if @actions_requiring_special_handling.include?(action_name)
        command_return = run_action_requiring_special_handling(
          command: command,
          parameter_map: parameter_map,
          action_return_type: action_class_ref.return_type
        )
        return command_return
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
      end
    
          it 'works with multiple ignore patterns' do
        pattern1 = 'Pods/*'
        pattern2 = '../**/*/Xcode*'
        result = Fastlane::FastFile.new.parse('lane :test do
          slather({
            ignore: ['#{pattern1}', '#{pattern2}'],
            proj: 'foo.xcodeproj'
          })
        end').runner.execute(:test)
    
    # test monkey patched method on both (simulated) OSes
describe 'monkey patch of String.shellescape (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
      task :examples => 'examples:build'
  namespace :examples do
    desc 'Open all example workspaces in Xcode, which recreates the schemes.'
    task :recreate_workspace_schemes do
      Dir['examples/*'].each do |example|
        Dir.chdir(example.to_s) do
          # TODO: we need to open the workspace in Xcode at least once, otherwise it might not contain schemes.
          # The schemes do not seem to survive a SCM round-trip.
          sh 'open *.xcworkspace'
          sleep 5
        end
      end
    end
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end
