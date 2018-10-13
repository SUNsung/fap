
        
        # Mimic how the proposed change would first execute a couple of checks and
# proceed to process with Liquid if necessary
def conditional_liquid(content)
  return content if content.nil? || content.empty?
  return content unless content.include?('{%') || content.include?('{{')
  always_liquid(content)
end
    }
    }
    }
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    Then(%r!^I should (not )?see '(.*)' in the build output$!) do |negative, text|
  if negative.nil? || negative.empty?
    expect(jekyll_run_output).to match Regexp.new(text)
  else
    expect(jekyll_run_output).not_to match Regexp.new(text)
  end
end
    
          def comment_line(comment_line); end
    
      def self.status_file; test_dir.join('jekyll_status.txt'); end
    
            def print_message(json_message)
          msg = JSON.parse(json_message)
          # Not sure what the 'url' command even does in LiveReload.  The spec is silent
          # on its purpose.
          Jekyll.logger.info 'LiveReload:', 'Browser URL: #{msg['url']}' if msg['command'] == 'url'
        end
    
            # If our highlighter is CodeRay we go in to merge the CodeRay defaults
        # with your 'coderay' key if it's there, deprecating it in the
        # process of you using it.
        def modernize_coderay_config
          unless @config['coderay'].empty?
            Jekyll::Deprecator.deprecation_message(
              'You are using 'kramdown.coderay' in your configuration, ' \
              'please use 'syntax_highlighter_opts' instead.'
            )
    
        def arg_is_present?(args, deprecated_argument, message)
      deprecation_message(message) if args.include?(deprecated_argument)
    end
    
        brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
      def core_tap_origin
    CoreTap.instance.remote || '(none)'
  end
    
        dirs.each do |d|
      files = []
      d.find { |pn| files << pn unless pn.directory? }
      print_remaining_files files, d
    end
    
      private
    
        def initialize(analytics_ingester_client: AnalyticsIngesterClient.new(GA_TRACKING))
      require 'securerandom'
      @session_id = SecureRandom.uuid
      @client = analytics_ingester_client
      @threads = []
      @launch_event_sent = false
    end
    
            # Stub out calls related to the execution environment
        client = double('ingester_client')
        session = FastlaneCore::AnalyticsSession.new(analytics_ingester_client: client)
        expect(client).to receive(:post_event).with({
            client_id: p_hash,
            category: 'fastlane Client Langauge - ruby',
            action: :launch,
            label: nil,
            value: nil
        })
    
            [
          'This will automatically tag your build with the following format: `<grouping>/<lane>/<prefix><build_number>`, where:'.markdown_preserve_newlines,
          list,
          'For example, for build 1234 in the 'appstore' lane, it will tag the commit with `builds/appstore/1234`.'
        ].join('\n')
      end
    
          it 'specified tag overrides generate tag' do
        tag = '2.0.0'
    
              it 'raises an exception' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                  carthage(command: '#{command}', output: 'bla.framework.zip')
                end').runner.execute(:test)
            end.to raise_error('Output option is available only for 'archive' command.')
          end
        end
      end
    
          it 'Uses pattern matching for tag name if requested' do
        tag_match_pattern = '*1.8*'
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(tag_match_pattern: '#{tag_match_pattern}')
        end').runner.execute(:test)
    
            expect(result).to eq('git commit -m message ./fastlane/README.md ./LICENSE')
      end
    
    # remove (double and single) quote pairs
# un-double-double quote resulting string
def simulate_windows_shell_unwrapping(string)
  regex = /^('|')(([^'])(\S*)([^']))('|')$/
  unless string.to_s.match(regex).nil?
    string = string.to_s.match(regex)[2] # get only part in quotes
    string.to_s.gsub!('''', ''') # remove double double quotes
  end
  return string
end
    
        # Returns the original encoding of the document.
    #
    # @return [Encoding, nil]
    # @raise [Encoding::UndefinedConversionError] if the source encoding
    #   cannot be converted to UTF-8
    # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
    def source_encoding
      check_encoding!
      @source_encoding
    end