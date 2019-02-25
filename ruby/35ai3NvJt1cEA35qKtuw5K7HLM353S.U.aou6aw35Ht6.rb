
        
            def to_a
      @filters.dup
    end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
      def account_feed_path?
    hub_topic_params[:controller] == 'accounts' && hub_topic_params[:action] == 'show' && hub_topic_params[:format] == 'atom'
  end
end

    
      before_action :set_account
  respond_to :txt
    
    desc 'Run all tests'
task :test do
  test_cases = [
    {
      'env'   => {'MATHN' => 'true'},
      'tasks' => ['test:ruby', 'test:spec', :rubocop]
    },
    {
      'env'   => {'MATHN' => 'false'},
      'tasks' => ['test:ruby']
    }
  ]
    
        # Dump all the parsed {Sass::Tree::RuleNode} selectors to strings.
    #
    # @param root [Tree::Node] The parent node
    def dump_selectors(root)
      root.children.each do |child|
        next dump_selectors(child) if child.is_a?(Tree::DirectiveNode)
        next unless child.is_a?(Tree::RuleNode)
        child.rule = [child.parsed_rules.to_s]
        dump_selectors(child)
      end
    end
    
            if scanner.eos?
          end_pos = str.source_range.end_pos
          node = Tree::CssImportNode.new(str)
        else
          supports_parser = Sass::SCSS::Parser.new(scanner,
            @options[:filename], @options[:importer],
            @line, str.source_range.end_pos.offset)
          supports_condition = supports_parser.parse_supports_clause
    
    module Sass
  # The abstract base class for lexical environments for SassScript.
  class BaseEnvironment
    class << self
      # Note: when updating this,
      # update sass/yard/inherited_hash.rb as well.
      def inherited_hash_accessor(name)
        inherited_hash_reader(name)
        inherited_hash_writer(name)
      end
    
    module Sass::Exec
  # The abstract base class for Sass executables.
  class Base
    # @param args [Array<String>] The command-line arguments
    def initialize(args)
      @args = args
      @options = {}
    end
    
          had_error = false
      Sass::Plugin.on_creating_directory {|dirname| puts_action :directory, :green, dirname}
      Sass::Plugin.on_deleting_css {|filename| puts_action :delete, :yellow, filename}
      Sass::Plugin.on_deleting_sourcemap {|filename| puts_action :delete, :yellow, filename}
      Sass::Plugin.on_compilation_error do |error, _, _|
        if error.is_a?(SystemCallError) && !@options[:stop_on_error]
          had_error = true
          puts_action :error, :red, error.message
          STDOUT.flush
          next
        end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
        def initialize(local_file)
      @local_file = local_file
    end