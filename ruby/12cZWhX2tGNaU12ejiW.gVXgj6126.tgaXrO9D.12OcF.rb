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
    
        # Create a new Collection.
    #
    # site - the site to which this collection belongs.
    # label - the name of the collection
    #
    # Returns nothing.
    def initialize(site, label)
      @site     = site
      @label    = sanitize_label(label)
      @metadata = extract_metadata
    end
    
            def after_install(path, options = {})
          unless options['blank'] || options['skip-bundle']
            begin
              require 'bundler'
              bundle_install path
            rescue LoadError
              Jekyll.logger.info 'Could not load Bundler. Bundle install skipped.'
            end
          end
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
          # Private: Determine whether a class name is an allowed custom
      #   markdown class name.
      #
      # parser_name - the name of the parser class
      #
      # Returns true if the parser name contains only alphanumeric
      # characters and is defined within Jekyll::Converters::Markdown
      def custom_class_allowed?(parser_name)
        parser_name !~ %r![^A-Za-z0-9_]! && self.class.constants.include?(
          parser_name.to_sym
        )
      end
    end
  end
end

    
          def initialize(config)
        Jekyll::External.require_with_graceful_fail 'kramdown' unless defined?(Kramdown)
        @config = config['kramdown'].dup || {}
        @config[:input] = :SmartyPants
      end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
      def dump_formula_report(key, title)
    formulae = select_formula(key).sort.map do |name, new_name|
      # Format list items of renamed formulae
      if key == :R
        name = pretty_installed(name) if installed?(name)
        new_name = pretty_installed(new_name) if installed?(new_name)
        '#{name} -> #{new_name}'
      else
        installed?(name) ? pretty_installed(name) : name
      end
    end
    
        def build_for_type(type, user, attributes = {})
      attributes.delete(:type)
    
      def index
    set_table_sort sorts: %w[provider name global], default: { provider: :asc }
    
            # This returns all the config classes for the various provisioners.
        #
        # @return [Registry]
        def provisioner_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provisioner])
            end
          end
        end
    
          def [](key)
        super(convert_key(key))
      end
    
          # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
              if argv.length == 2
            # @deprecated
            @env.ui.warn('WARNING: The second argument to `vagrant box remove`')
            @env.ui.warn('is deprecated. Please use the --provider flag. This')
            @env.ui.warn('feature will stop working in the next version.')
            options[:provider] = argv[1]
          end
    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
      # rspec-expectations config goes here. You can use an alternate
  # assertion/expectation library such as wrong or the stdlib/minitest
  # assertions if you prefer.
  config.expect_with :rspec do |expectations|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://myronmars.to/n/dev-blog/2012/06/rspecs-new-expectation-syntax
    expectations.syntax = :expect
  end