
        
          def zsh_completion_caveats
    if keg && keg.completion_installed?(:zsh) then <<-EOS.undent
      zsh completion has been installed to:
        #{HOMEBREW_PREFIX}/share/zsh/site-functions
      EOS
    end
  end
    
          if path.symlink? || path.directory?
        next
      elsif path.extname == '.la'
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if path.mach_o_executable? || path.text_executable?
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end

    
      def query_regexp(query)
    case query
    when %r{^/(.*)/$} then Regexp.new($1)
    else /.*#{Regexp.escape(query)}.*/i
    end
  rescue RegexpError
    odie '#{query} is not a valid regex'
  end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
        def set_error(platform, block)
      unless error_blocks[platform].nil?
        UI.error('You defined multiple `error` blocks in your `Fastfile`. The last one being set will be used.')
      end
      error_blocks[platform] = block
    end
    
        def did_show_message?
      file_name = '.did_show_opt_info'
    
        def handle_tls_error!(e)
      # Apple has upgraded its App Store Connect servers to require TLS 1.2, but
      # system Ruby 2.0 does not support it. We want to suggest that users upgrade
      # their Ruby version
      suggest_ruby_reinstall(e)
      display_user_error!(e, e.to_s)
    end
    
          it 'generates the correct git command with an array of paths and/or pathspecs' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/*.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
        it 'sends escape characters correctly to the backend' do
      emitter.events << Event.new(payload: {data: 'Line 1\nLine 2\nLine 3'})
      formatting_agent.sources << emitter
      formatting_agent.options.merge!('instructions' => {'data' => '{{data | newline_to_br | strip_newlines | split: '<br />' | join: ','}}'})
      formatting_agent.save!
    
        it 'returns a Glyphicon icon element with an addidional class' do
      icon = icon_tag('glyphicon-help', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help.text-info')).to be_a Nokogiri::XML::Element
    end
    
        it 'cleans up old logs when there are more than log_length' do
      stub(AgentLog).log_length { 4 }
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 3')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 3')
    end
    
            format('%1$*2$c', 97, -10).should == 'a         '
        format('%1$*2$p', [], -10).should == '[]        '
        format('%1$*2$s', 'abc', -10).should == 'abc       '
      end
    
      it 'does not raise an error on a tainted, frozen object' do
    o = Object.new.taint.freeze
    o.taint.should equal(o)
  end
    
      it 'accepts a proc argument instead of a block' do
    captured = nil
    
                  <% if frame.post_context %>
              <ol start='<%=h frame.lineno + 1 %>' class='post-context'
                  id='post-<%= id %>' onclick='toggle(<%= id %>);'>
                <% frame.post_context.each do |line| %>
                <li class='post-context-line'><code><%=h line %></code></li>
                <% end %>
              </ol>
              <% end %>
              <div class='clear'></div>
            </li>
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end
