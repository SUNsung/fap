
        
                result = block.call(parameters.first || {}) # to always pass a hash
        self.current_lane = original_lane
    
        def handle_ssl_error!(e)
      # SSL errors are very common when the Ruby or OpenSSL installation is somehow broken
      # We want to show a nice error message to the user here
      # We have over 20 GitHub issues just for this one error:
      #   https://github.com/fastlane/fastlane/search?q=errno%3D0+state%3DSSLv3+read+server&type=Issues
      suggest_ruby_reinstall(e)
      display_user_error!(e, e.to_s)
    end
    
          def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
          it 'handles no extension or extensions parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def initialize(content)
      @content = content
      @html = document? ? parse_as_document : parse_as_fragment
    end
    
        odie 'Unknown command: #{cmd}' unless path
    puts path
  end
end

    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
        def URIAddEncodedOctetToBuffer(octet, result, index)
      result[index] = 37; # Char code of '%'.
      index         += 1
      result[index] = @@hexCharCodeArray[octet >> 4];
      index         += 1
      result[index] = @@hexCharCodeArray[octet & 0x0F];
      index += 1
      return index;
    end
    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@page.wiki.user_icons}')
        else
          super
        end
      end
    
    def name
  @name ||= Dir['*.gemspec'].first.split('.').first
end
    
      if wiki_options[:plantuml_url]
    Gollum::Filter::PlantUML.configure do |config|
      puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
      config.url = wiki_options[:plantuml_url]
    end
  end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end