
        
          # Make this VM reachable on the host network as well, so that other
  # VM's running other browsers can access our dev server.
  config.vm.network :private_network, ip: '192.168.10.200'
    
          it 'renders HTML' do
        expect(render(options, screenshots)).to match(/<html>/)
      end
    end
    
        def groups=(groups)
      @groups = groups ? groups.compact : nil
    end
    
          script_array = crash_script.shell_script.split('\n').find { |line| includes_run_script?(line) }.split(' ')
      if script_array.count == 3
        results.merge!({
          # The run script build phase probably refers to Fabric.framework/run, but the submit binary
          # only lives in the Crashlytics.framework, so we'll substitute and try to resolve it that way.
          crashlytics_path: File.dirname(script_array[0].gsub('Fabric.framework', 'Crashlytics.framework')),
          api_key: script_array[1],
          build_secret: script_array[2]
        })
      end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml MyCoolApp')
      end
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 1.1.0/)
      end