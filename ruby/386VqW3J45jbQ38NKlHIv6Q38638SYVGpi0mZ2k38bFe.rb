
        
              def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :tag,
                                       env_name: 'FL_GIT_TAG_TAG',
                                       description: 'Define your own tag text. This will replace all other parameters',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :grouping,
                                       env_name: 'FL_GIT_TAG_GROUPING',
                                       description: 'Is used to keep your tags organised under one 'folder'',
                                       default_value: 'builds'),
          FastlaneCore::ConfigItem.new(key: :prefix,
                                       env_name: 'FL_GIT_TAG_PREFIX',
                                       description: 'Anything you want to put in front of the version number (e.g. 'v')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :postfix,
                                       env_name: 'FL_GIT_TAG_POSTFIX',
                                       description: 'Anything you want to put at the end of the version number (e.g. '-RC1')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :build_number,
                                       env_name: 'FL_GIT_TAG_BUILD_NUMBER',
                                       description: 'The build number. Defaults to the result of increment_build_number if you\'re using it',
                                       default_value: Actions.lane_context[Actions::SharedValues::BUILD_NUMBER],
                                       default_value_dynamic: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :message,
                                       env_name: 'FL_GIT_TAG_MESSAGE',
                                       description: 'The tag message. Defaults to the tag's name',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :commit,
                                       env_name: 'FL_GIT_TAG_COMMIT',
                                       description: 'The commit or object where the tag will be set. Defaults to the current HEAD',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :force,
                                       env_name: 'FL_GIT_TAG_FORCE',
                                       description: 'Force adding the tag',
                                       optional: true,
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :sign,
                                       env_name: 'FL_GIT_TAG_SIGN',
                                       description: 'Make a GPG-signed tag, using the default e-mail address's key',
                                       optional: true,
                                       is_string: false,
                                       default_value: false)
        ]
      end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            commit: '#{commit}'
          })
        end').runner.execute(:test)
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
    desc 'generates TOC'
task :toc, [:readme] do |t, a|
  a.with_defaults :readme => 'README.md'
    
                  <ol start='<%= frame.lineno %>' class='context' id='<%= id %>'
                  onclick='toggle(<%= id %>);'>
                <li class='context-line' id='context-<%= id %>'><code><%=
                  h frame.context_line %></code></li>
              </ol>
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
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
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end