
        
              File.write(new_path, '1')
      false
    end
    
        def run!
      require_program(:version, :description)
      trap('INT') { abort(program(:int_message)) } if program(:int_message)
      trap('INT') { program(:int_block).call } if program(:int_block)
      global_option('-h', '--help', 'Display help documentation') do
        args = @args - %w(-h --help)
        command(:help).run(*args)
        return
      end
      global_option('-v', '--version', 'Display version information') do
        say(version)
        return
      end
      parse_global_options
      remove_global_options(options, @args)
    
            expect(result).to eq('git commit -m message ./fastlane/README.md ./LICENSE ' + './fastlane/spec/fixtures/git_commit/A FILE WITH SPACE'.shellescape)
      end
    
            it 'escapes spaces in list of files to process' do
          file = 'path/to/my project/source code/AppDelegate.swift'
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
                files: ['#{file}']
            )
          end').runner.execute(:test)
    
        os = 'other'
    shellescape_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        str = testcase['str'].to_s
        expect_correct_implementation_to_be_called(str, :shellescape, os)
        escaped = str.shellescape
        expect(escaped).to eq(testcase['expect'][os])
      end
    end
  end
end
    
          dir.find do |src|
        dst = HOMEBREW_PREFIX + src.relative_path_from(path)
        dst.extend(ObserverPathnameExtension)
    
    class GitHubGitDownloadStrategy < GitDownloadStrategy
  def initialize(url, name, version, **meta)
    super
    
    module Homebrew
  module_function
    
      # Default log-level (development=debug, production=info)
  Logging.logger.root.level = config.log_level
    
        execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
    When /^I should see one less invite$/ do
  step 'I should see \'#{@inviter_invite_count -1} invites left\''
end
    
      # submit the password reset form
  def submit_password_reset_form
    find('.btn').click
  end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
    # Get the version string. If this is being installed from Git,
# this includes the proper prerelease version.
def get_version
  File.read(scope('VERSION').strip)
end
    
    require 'sass/logger'
require 'sass/util'
    
      # A read-only wrapper for a lexical environment for SassScript.
  class ReadOnlyEnvironment < BaseEnvironment
    def initialize(parent = nil, options = nil)
      super
      @content_cached = nil
    end
    # The read-only environment of the caller of this environment's mixin or function.
    #
    # @see BaseEnvironment#caller
    # @return {ReadOnlyEnvironment}
    def caller
      return @caller if @caller
      env = super
      @caller ||= env.is_a?(ReadOnlyEnvironment) ? env : ReadOnlyEnvironment.new(env, env.options)
    end
    
        # Set an option for specifying `Encoding.default_external`.
    #
    # @param opts [OptionParser]
    def encoding_option(opts)
      encoding_desc = 'Specify the default encoding for input files.'
      opts.on('-E', '--default-encoding ENCODING', encoding_desc) do |encoding|
        Encoding.default_external = encoding
      end
    end
    
          output = @options[:output] = @args.shift
      raise 'Error: --from required when using --recursive.' unless @options[:from]
      raise 'Error: --to required when using --recursive.' unless @options[:to]
      unless File.directory?(@options[:input])
        raise 'Error: '#{@options[:input]}' is not a directory'
      end
      if @options[:output] && File.exist?(@options[:output]) &&
        !File.directory?(@options[:output])
        raise 'Error: '#{@options[:output]}' is not a directory'
      end
      @options[:output] ||= @options[:input]
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
      class ImageTag < Liquid::Tag
    @img = nil
    
      # Escapes CDATA sections in post content
  def cdata_escape(input)
    input.gsub(/<!\[CDATA\[/, '&lt;![CDATA[').gsub(/\]\]>/, ']]&gt;')
  end
    
    require 'pathname'
require './plugins/octopress_filters'