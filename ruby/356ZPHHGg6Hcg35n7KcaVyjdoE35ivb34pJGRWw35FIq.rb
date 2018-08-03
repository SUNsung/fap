
        
                # Parse the options
        argv = parse_options(opts)
        return if !argv
        if argv.length < 2
          raise Vagrant::Errors::CLIInvalidUsage,
            help: opts.help.chomp
        end
    
        # @see Node#deep_copy
    def deep_copy
      node = dup
      node.instance_variable_set('@before', @before.deep_copy) if @before
      node.instance_variable_set('@mid', @mid.deep_copy)
      node.instance_variable_set('@after', @after.deep_copy) if @after
      node
    end
    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
        def ensure_stage
      Rake::Task.define_task(:ensure_stage) do
        unless stage_set?
          puts t(:stage_not_set)
          exit 1
        end
      end
    end
    
        # Provide a wrapper for the SCM that loads a strategy for the user.
    #
    # @param [Rake] context     The context in which the strategy should run
    # @param [Module] strategy  A module to include into the SCM instance. The
    #    module should provide the abstract methods of Capistrano::SCM
    #
    def initialize(context, strategy)
      @context = context
      singleton = class << self; self; end
      singleton.send(:include, strategy)
    end
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
      it 'enables printing all config variables on command line parameter' do
    capture_io do
      flags '--print-config-variables', '-p'
    end
    expect(Capistrano::Configuration.fetch(:print_config_variables)).to be true
  end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
        def poster
      'poster='#{@poster}'' if @poster
    end