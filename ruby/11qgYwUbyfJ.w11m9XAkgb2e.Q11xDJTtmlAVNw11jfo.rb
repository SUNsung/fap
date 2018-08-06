
        
            prune
  end
    
        results.map do |name|
      begin
        formula = Formulary.factory(name)
        canonical_name = formula.name
        canonical_full_name = formula.full_name
      rescue
        canonical_name = canonical_full_name = name
      end
      # Ignore aliases from results when the full name was also found
      if aliases.include?(name) && results.include?(canonical_full_name)
        next
      elsif (HOMEBREW_CELLAR/canonical_name).directory?
        pretty_installed(name)
      else
        name
      end
    end.compact
  end
end

    
    invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
          options[:only] = %w(getting-started/ css/ components/ javascript/)
    end
  end
end

    
        version 'HashLink' do
      self.base_url = 'https://api.haxe.org/hl/'
    end
    
          options[:only_patterns] = [
        /\Aget_started/,
        /\Aprogrammers_guide/,
        /\Atutorials/,
        /\Aperformance/,
        /\Adeploy/,
        /\Aextend/]
    end
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
        def add(path, content)
      @pages[path] = content
    end
    
      def gist_logs
    raise FormulaUnspecifiedError if ARGV.resolved_formulae.length != 1
    
        formulae = ARGV.include?('--installed') ? Formula.installed : Formula
    recursive = ARGV.flag? '--recursive'
    only_installed_arg = ARGV.include?('--installed') &&
                         !ARGV.include?('--include-build') &&
                         !ARGV.include?('--include-test') &&
                         !ARGV.include?('--include-optional') &&
                         !ARGV.include?('--skip-recommended')
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
          rescue_from OpenIDConnect::ValidationFailed,
                  ActiveRecord::RecordInvalid, Api::OpenidConnect::Error::InvalidSectorIdentifierUri do |e|
        validation_fail_as_json(e)
      end
    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
      def developer_prefix
    `xcode-select --print-path`.strip
  end
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end
    
                validator = Source::HealthReporter.new(source.repo)
            validator.pre_check do |_name, _version|
              UI.print '.'
            end
            report = validator.analyze
            UI.puts
            UI.puts
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            def operator
          assignment_node = meta_assignment_node || @node
          assignment_node.loc.operator.source
        end
    
            def should_be_unused?
          name.to_s.start_with?('_')
        end
    
              self.class.new(lines, offense_annotations)
        end
    
              it 'autocorrects the offenses' do
            new_source = autocorrect_source(source)
            expect(new_source).to eq(<<-RUBY.strip_indent)
              #{type} Parent
                #{type} SomeObject
                  URL = %q(http://example.com)
    
        context 'opening brace on same line as first element' do
      context 'last element has a trailing comma' do
        it 'autocorrects closing brace on different line from last element' do
          new_source = autocorrect_source(['#{prefix}#{open}#{a}, # a',
                                           '#{b}, # b',
                                           close,
                                           suffix])