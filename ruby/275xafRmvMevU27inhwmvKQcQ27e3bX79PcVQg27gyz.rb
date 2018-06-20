
        
        def bottle_tag
  if MacOS.version >= :lion
    MacOS.cat
  elsif MacOS.version == :snow_leopard
    Hardware::CPU.is_64_bit? ? :snow_leopard : :snow_leopard_32
  else
    # Return, e.g., :tiger_g3, :leopard_g5_64, :leopard_64 (which is Intel)
    if Hardware::CPU.type == :ppc
      tag = '#{MacOS.cat}_#{Hardware::CPU.family}'.to_sym
    else
      tag = MacOS.cat
    end
    MacOS.prefer_64_bit? ? '#{tag}_64'.to_sym : tag
  end
end
    
      def <<(o)
    @settings << o
    self
  end
    
      def describe_path(path)
    return 'N/A' if path.nil?
    realpath = path.realpath
    if realpath == path
      path
    else
      '#{path} => #{realpath}'
    end
  end
    
        if !updated
      puts 'Already up-to-date.'
    elsif hub.empty?
      puts 'No changes to formulae.'
    else
      hub.dump
      hub.reporters.each(&:migrate_tap_migration)
      hub.reporters.each(&:migrate_formula_rename)
      Descriptions.update_cache(hub)
    end
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
        options[:container] = ->(filter) {
      filter.current_url.path.start_with?('/getting-started') ? '#main' : '#content'
    }
    options[:title] = false
    options[:root_title] = 'Elixir'
    
        def parse(response)
      unless response.url == root_url || self.class.version == 'Guide'
        response.body.sub!(/<nav class='devsite-nav-responsive-sidebar.+?<\/nav>/m, '')
        response.body.gsub!(/<li class='devsite-nav-item'>.+?<\/li>/m, '')
      end
    
        def as_json
      @pages
    end
    
            ORDERED_DIRECTIVES.each do |directive_sym|
          next unless directives.key?(directive_sym)
          args = directives[directive_sym]
          send('uninstall_#{directive_sym}', *(args.is_a?(Hash) ? [args] : args), **options)
        end
      end
    
      def dashboard
    gon.push(pod_version: pod_version)
  end
    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end
    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end
    
        expect(get('/..', :foo => '<bar>')).to be_ok
  end
    
                  add_offense(condition)
            end