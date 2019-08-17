
        
          #
  # Kills off the connection threads if there are any hanging around.
  #
  def cleanup_handler
    # Kill any remaining handle_connection threads that might
    # be hanging around
    conn_threads.each { |thr|
      thr.kill
    }
  end
    
        # The first character must not be a non-alpha character or PHP chokes.
    i = 0
    while (b64[i].chr =~ %r{[0-9/+]})
      b64[i] = 'chr(#{b64[i]}).'
    end
    
        asm = %Q^
      bind_tcp:
        ; setup the structures we need on the stack...
        mov r14, 'ws2_32'
        push r14               ; Push the bytes 'ws2_32',0,0 onto the stack.
        mov r14, rsp           ; save pointer to the 'ws2_32' string for LoadLibraryA call.
        sub rsp, 408+8         ; alloc sizeof( struct WSAData ) bytes for the WSAData
                               ; structure (+8 for alignment)
        mov r13, rsp           ; save pointer to the WSAData structure for WSAStartup call.
        xor rax, rax
    ^
    
      #
  # Generate the first stage
  #
  def generate
    xorkey, rc4key = rc4_keys(datastore['RC4PASSWORD'])
    conf = {
      port:        datastore['LPORT'],
      xorkey:      xorkey,
      rc4key:      rc4key,
      reliable:    false
    }
    
        return unless res
    
            By specifying 'pdf' for the URL_TYPE, the module will treat
        the specified URL(s) as PDF documents. The module will
        download the documents and extract the authors' names from the
        document metadata.
    
      # Use a different cache store in production.
  # config.cache_store = :mem_cache_store
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
              it 'sets EMBEDDED_CONTENT_CONTAINS_SWIFT when the target_swift_version is nil' do
            @generator.send(:pod_targets).first.stubs(:uses_swift?).returns(true)
            @target_definition.stubs(:swift_version).returns(nil)
            @generator.generate.to_hash['EMBEDDED_CONTENT_CONTAINS_SWIFT'].should == 'YES'
          end
    
    end
    
          # @return [Bool] whether this resolved specification is by non-library targets.
      #
      attr_reader :used_by_non_library_targets_only
      alias used_by_non_library_targets_only? used_by_non_library_targets_only
    
                filename = path.basename.to_s
            file_ref = group.files.find { |f| f.display_name == filename }
            if file_ref && file_ref.path != path
              file_ref_path = Pathname.new(file_ref.real_path)
              if !file_ref_path.exist? || !xcconfig_path.exist? || file_ref_path.realpath != xcconfig_path.realpath
                file_ref.path = path.to_s
              end
            end
    
          UI.warnings.should.match /not set.*base configuration/
    end
    
            # @return [Bool] Bool indicating if this project is a pod target subproject.
        # Used by `generate_multiple_pod_projects` installation option.
        #
        attr_reader :pod_target_subproject
    
    module Pod
  module UserInterface
    # Redirects GH-issues delegate callbacks to CocoaPods UI methods.
    #
    class InspectorReporter
      # Called just as the investigation has begun.
      # Lets the user know that it's looking for an issue.
      #
      # @param [query] String unused
      #
      # @param [GhInspector::Inspector] inspector
      #        The current inspector
      #
      # @return [void]
      #
      def inspector_started_query(_, inspector)
        UI.puts 'Looking for related issues on #{inspector.repo_owner}/#{inspector.repo_name}...'
      end
    
        it 'should use the default URL if no template URL is given' do
      template_url = 'https://github.com/CocoaPods/pod-template.git'
      @sut.any_instance.expects(:git!).with(['clone', template_url, 'TestPod']).once
      run_command('lib', 'create', 'TestPod')
    end
  end
end

    
            # @return [Pathname] the path to the root of the project containing the user target
        #
        attr_reader :client_root
    
                <li class='code <%= frame_class(frame) %>'>
              <% if frame.pre_context %>
              <ol start='<%=h frame.pre_context_lineno + 1 %>'
                  class='pre-context' id='pre-<%= id %>'
                  onclick='toggle(<%= id %>);'>
                <% frame.pre_context.each do |line| %>
                <li class='pre-context-line'><code><%=h line %></code></li>
                <% end %>
              </ol>
              <% end %>
    
    desc 'run specs'
task(:spec) { ruby '-S rspec spec' }
    
            if @javascript and not @escaper.respond_to? :escape_javascript
          fail('Use EscapeUtils for JavaScript escaping.')
        end
      end
    
          expected_header = <<-END.chomp
rack.%2573ession=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
END
      expect(last_response.headers['Set-Cookie']).to eq(expected_header)
    end
  end
    
      it 'returns the merged `ConfigPart#config_string`' do
    expect(subject.config_string).to eq(ordered_config_parts.collect(&:text).join('\n'))
  end
    
          it 'list the plugins with their versions' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose')
        result.stdout.split('\n').each do |plugin|
          expect(plugin).to match(/^logstash-\w+-\w+\s\(\d+\.\d+.\d+(.\w+)?\)/)
        end
      end
    end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    module Jekyll
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end