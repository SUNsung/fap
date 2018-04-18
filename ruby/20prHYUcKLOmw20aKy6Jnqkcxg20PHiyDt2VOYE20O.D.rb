
        
            def add(path, content)
      @pages[path] = content
    end
    
            doc
      end
    end
  end
end

    
    module Sass::Exec
  # The `sass-convert` executable.
  class SassConvert < Base
    # @param args [Array<String>] The command-line arguments
    def initialize(args)
      super
      require 'sass'
      @options[:for_tree] = {}
      @options[:for_engine] = {:cache => false, :read_cache => true}
    end
    
      # Creates a delayed logger wrapping `inner`.
  #
  # @param inner [Sass::Logger::Base] The wrapped logger.
  def initialize(inner)
    self.log_level = inner.log_level
    @inner = inner
    @messages = []
  end
    
            Readline::HISTORY << text
        parse_input(environment, text)
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
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
      it 'enables printing all config variables on command line parameter' do
    capture_io do
      flags '--print-config-variables', '-p'
    end
    expect(Capistrano::Configuration.fetch(:print_config_variables)).to be true
  end
    
              new_source =
            node.receiver.source + ' =~ ' + node.first_argument.source
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze
    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral
    
    RSpec.describe RuboCop::Cop::Style::StringMethods, :config do
  subject(:cop) { described_class.new(config) }
    
          context 'source without blank lines' do
        let(:source) do
          <<-RUBY.strip_indent
            #{type} SomeObject
              def do_something; end
            end
          RUBY
        end
    
          if File.directory?(source_entry)
        FileUtils.mkdir(target_entry) unless File.exists?(target_entry)
        transform_r(source_entry, target_entry)
      else
        # copy the new file, in case of being an .erb file should render first
        if source_entry.end_with?('erb')
          target_entry = target_entry.gsub(/.erb$/,'').gsub('example', name)
          File.open(target_entry, 'w') { |f| f.write(render(source_entry)) }
        else
          FileUtils.cp(source_entry, target_entry)
        end
        puts '\t create #{File.join(full_plugin_name, Pathname.new(target_entry).relative_path_from(Pathname.new(@target_path)))}'
      end
    end
  end
    
        r0
  end