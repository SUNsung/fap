
        
            def execute_action(method_sym, class_ref, arguments, custom_dir: nil, from_action: false)
      if custom_dir.nil?
        custom_dir ||= '.' if Helper.test?
        custom_dir ||= '..'
      end
    
    module Fastlane
  # Handles receiving commands from the socket server, finding the Action to be invoked,
  # invoking it, and returning any return values
  class SocketServerActionCommandExecutor < CommandExecutor
    attr_accessor :runner
    attr_accessor :actions_requiring_special_handling
    
          it 'adds create_html param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            create_html: true
          )
        end').runner.execute(:test)
    
          it 'Uses the provided pretty format to collect log messages' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(pretty: '%s%n%b')
        end').runner.execute(:test)
    
    if File.exist?(file_path)
  junit.parse(file_path)
  junit.headers = [:name, :file]
  junit.report
else
  puts('Couldn't find any test artifacts in path #{file_path}')
end

    
        system_command '#{staged_path}/AdobePatchInstaller.app/Contents/MacOS/AdobePatchInstaller',
                   args: [
                           '--mode=silent',
                         ],
                   sudo: true
  end
    
            <% id += 1 %>
      <% end %>
    
              compare_with_real_token token, session
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
      describe '.random_token' do
    it 'generates a base64 encoded 32 character string' do
      expect(Base64.strict_decode64(token).length).to eq(32)
    end
  end
end

    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
    RSpec.describe RuboCop::Cop::Layout::MultilineHashBraceLayout, :config do
  subject(:cop) { described_class.new(config) }
    
      context 'when arguments to a method' do
    let(:prefix) { 'bar(' }
    let(:suffix) { ')' }
    let(:source) { construct(false, true) }
    
          # Calls the given block for each `pair` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_pair
        return each_child_node(:pair).to_enum unless block_given?
    
          # Checks whether the `if` node has an `else` clause.
      #
      # @note This returns `true` for nodes containing an `elsif` clause.
      #       This is legacy behavior, and many cops rely on it.
      #
      # @return [Boolean] whether the node has an `else` clause
      def else?
        loc.respond_to?(:else) && loc.else
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
    Given /^I add this snippet to the User model:$/ do |snippet|
  file_name = 'app/models/user.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') { |f| f << content.sub(/end\Z/, '#{snippet}\nend') }
  end
end
    
        def initialize
      clear
    end
    
        def empty_file?
      File.exist?(@filepath) && File.size(@filepath) == 0
    end
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end