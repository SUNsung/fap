
        
          def plist_caveats
    s = []
    if f.plist || (keg && keg.plist_installed?)
      destination = if f.plist_startup
        '/Library/LaunchDaemons'
      else
        '~/Library/LaunchAgents'
      end
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
        def self.cleanup_formula(formula)
      formula.eligible_kegs_for_cleanup.each do |keg|
        cleanup_path(keg) { keg.uninstall }
      end
    end
    
        print_remaining_files remaining_root_files, root, other
  end
    
      # GET /resource/password/new
  def new
    self.resource = resource_class.new
  end
    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
        def root?
      path == 'index'
    end
    
            css('pre[language]').each do |node|
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip
          node['data-language'] = 'html' if node.content.start_with?('<')
          node.remove_attribute('language')
          node.remove_attribute('format')
        end
    
          doc.css('#filecontents').css('h1, h2, h3, h4, h5, h6').each do |h|
        next if h.inner_text.empty?
        h['id'] =
          case h.inner_text
          when 'Referencing Parent Selectors: &'; 'parent-selector'
          when /^Comments:/; 'comments'
          when 'Strings'; 'sass-script-strings'
          when 'Division and /'; 'division-and-slash'
          when /^Subtraction,/; 'subtraction'
          when '& in SassScript'; 'parent-script'
          when '@-Rules and Directives'; 'directives'
          when '@extend-Only Selectors'; 'placeholders'
          when '@extend-Only Selectors'; 'placeholders'
          when '@each'; 'each-directive'
          when 'Multiple Assignment'; 'each-multi-assign'
          when 'Mixin Directives'; 'mixins'
          when /^Defining a Mixin:/; 'defining_a_mixin'
          when /^Including a Mixin:/; 'including_a_mixin'
          when 'Arguments'; 'mixin-arguments'
          when 'Passing Content Blocks to a Mixin'; 'mixin-content'
          else
            h.inner_text.downcase.gsub(/[^a-z _-]/, '').gsub(' ', '_')
          end
      end
    
      # Compile a Sass or SCSS string to CSS.
  # Defaults to SCSS.
  #
  # @param contents [String] The contents of the Sass file.
  # @param options [{Symbol => Object}] An options hash;
  #   see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  def self.compile(contents, options = {})
    options[:syntax] ||= :scss
    Engine.new(contents, options).to_css
  end
    
    module Sass
  module CacheStores
    # A backend for the Sass cache using the filesystem.
    class Filesystem < Base
      # The directory where the cached files will be stored.
      #
      # @return [String]
      attr_accessor :cache_location
    
        # Make rules use nesting so that
    #
    #     foo
    #       color: green
    #     foo bar
    #       color: red
    #     foo baz
    #       color: blue
    #
    # becomes
    #
    #     foo
    #       color: green
    #       bar
    #         color: red
    #       baz
    #         color: blue
    #
    # @param root [Tree::Node] The parent node
    def nest_seqs(root)
      current_rule = nil
      root.children.map! do |child|
        unless child.is_a?(Tree::RuleNode)
          nest_seqs(child) if child.is_a?(Tree::DirectiveNode)
          next child
        end
    
          output = input_path if @options[:in_place]
      write_output(out, output)
    rescue Sass::SyntaxError => e
      raise e if @options[:trace]
      file = ' of #{e.sass_filename}' if e.sass_filename
      raise 'Error on line #{e.sass_line}#{file}: #{e.message}\n  Use --trace for backtrace'
    rescue LoadError => err
      handle_load_error(err)
    end