
        
              # First check if there are local actions to import in the same directory as the Fastfile
      actions_path = File.join(File.expand_path('..', path), 'actions')
      Fastlane::Actions.load_external_actions(actions_path) if File.directory?(actions_path)
    
                if Fastlane::Actions.is_deprecated?(class_ref)
              puts('=========================================='.deprecated)
              puts('This action (#{method_sym}) is deprecated'.deprecated)
              puts(class_ref.deprecated_notes.to_s.deprecated) if class_ref.deprecated_notes
              puts('==========================================\n'.deprecated)
            end
            class_ref.runner = self # needed to call another action form an action
            return class_ref.run(arguments)
          end
        end
      rescue Interrupt => e
        raise e # reraise the interruption to avoid logging this as a crash
      rescue FastlaneCore::Interface::FastlaneCommonException => e # these are exceptions that we dont count as crashes
        raise e
      rescue FastlaneCore::Interface::FastlaneError => e # user_error!
        action_completed(method_sym.to_s, status: FastlaneCore::ActionCompletionStatus::USER_ERROR, exception: e)
        raise e
      rescue Exception => e # rubocop:disable Lint/RescueException
        # high chance this is actually FastlaneCore::Interface::FastlaneCrash, but can be anything else
        # Catches all exceptions, since some plugins might use system exits to get out
        action_completed(method_sym.to_s, status: FastlaneCore::ActionCompletionStatus::FAILED, exception: e)
        raise e
      end
    end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --exit-threshold \'2\' input/dir #{input_dir_with_spaces.shellescape} third/input/file.h')
      end
    
          it 'sets the configuration to Release' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              configuration: 'Release'
            )
          end').runner.execute(:test)
    
          it 'yields any error result' do
        expect_command('ls', '-la', exitstatus: 1)
        Fastlane::Actions.sh('ls', '-la') do |status, result|
          expect(status.exitstatus).to eq(1)
          expect(result).to be_empty
        end
      end
    
    # confirms that the escaped string that is generated actually
# gets turned back into the source string by the actual shell.
# abuses a `grep` (or `find`) error message because that should be cross platform
def confirm_shell_unescapes_string_correctly(string, escaped)
  compare_string = string.to_s.dup
    
              # Return the result
          result
        end
    
              @registered.each do |plugin|
            result += plugin.components.action_hooks[Plugin::ALL_ACTIONS]
            result += plugin.components.action_hooks[hook_name]
          end
    
      #
  # A hash that associated a file extension with a mime type for use as the
  # content type of responses.
  #
  ExtensionMimeTypes =
    {
      'rhtml' => 'text/html',
      'html'  => 'text/html',
      'htm'   => 'text/htm',
      'jpg'   => 'image/jpeg',
      'jpeg'  => 'image/jpeg',
      'gif'   => 'image/gif',
      'png'   => 'image/png',
      'bmp'   => 'image/bmp',
      'txt'   => 'text/plain',
      'css'   => 'text/css',
      'ico'   => 'image/x-icon',
    }
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
                checksum = cipher[0, 16]
            data = cipher[16, cipher.length - 1]
    
                decode_asn1(asn1)
          end
    
    def blog_url(user, project, source_dir)
  cname = '#{source_dir}/CNAME'
  url = if File.exists?(cname)
    'http://#{IO.read(cname).strip}'
  else
    'http://#{user.downcase}.github.io'
  end
  url += '/#{project}' unless project == ''
  url
end
    
    class SinatraStaticServer < Sinatra::Base
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end
    
        def cache(gist, file, data)
      cache_file = get_cache_file_for gist, file
      File.open(cache_file, 'w') do |io|
        io.write data
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
    
      # Returns a title cased string based on John Gruber's title case http://daringfireball.net/2008/08/title_case_update
  def titlecase(input)
    input.titlecase
  end
    
      include_examples 'multiline literal brace layout trailing comma' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
  end
end

    
          DOUBLE_SPLAT = '**'.freeze