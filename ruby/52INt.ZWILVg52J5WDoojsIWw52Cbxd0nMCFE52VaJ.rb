
        
            def reraise_formatted!(e, message)
      backtrace = FastlaneCore::Env.truthy?('FASTLANE_HIDE_BACKTRACE') ? [] : e.backtrace
      raise e, '[!] #{message}'.red, backtrace
    end
    
            cmd = ['git tag']
    
          it 'Collects logs with specified number of commits' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(commits_count: 10)
        end').runner.execute(:test)
    
          it 'passes the deprecated pathspec parameter to path parameter' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(pathspec: 'myfile.txt')
          end').runner.execute(:test)
        end
      end
    
          # We need to explicity test against Fastlane::Boolean, TrueClass/FalseClass
      if value.class != FalseClass && value.class != TrueClass
        UI.user_error!(''#{self.key}' value must be either `true` or `false`! Found #{value.class} instead.')
      end
    end
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
        # Returns the specified or detected guest type name.
    #
    # @return [Symbol]
    def name
      capability_host_chain[0][0]
    end
    
            # Parses the options given an OptionParser instance.
        #
        # This is a convenience method that properly handles duping the
        # originally argv array so that it is not destroyed.
        #
        # This method will also automatically detect '-h' and '--help'
        # and print help. And if any invalid options are detected, the help
        # will be printed, as well.
        #
        # If this method returns `nil`, then you should assume that help
        # was printed and parsing failed.
        def parse_options(opts=nil)
          # Creating a shallow copy of the arguments so the OptionParser
          # doesn't destroy the originals.
          argv = @argv.dup
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
    #{stack}
#{executable_path}
### Plugins
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end