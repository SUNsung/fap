
        
        unless File.exist?(PROF_OUTPUT_FILE)
  StackProf.run(
    mode: MODE.to_sym,
    interval: 100,
    raw: true,
    out: PROF_OUTPUT_FILE
  ) do
    puts 'GC Stats:', JSON.pretty_generate(GC.stat)
    GC.disable
    
    File.write(config, output)

    
          new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
      def test_untainted_path
    bug5374 = '[ruby-core:39745]'
    cwd = ('./'*40+'.'.taint).dup.untaint
    in_safe = proc {|safe| $SAFE = safe; File.stat(cwd)}
    assert_not_send([cwd, :tainted?])
    (0..1).each do |level|
      assert_nothing_raised(SecurityError, bug5374) {in_safe[level]}
    end
  ensure
    $SAFE = 0
  end
    
      it 'decodes the remaining doubles when passed the '*' modifier after another directive' do
    array = '@\x15333333@\x22ffffff'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
        t = Thread.new do
      while true
        break if exit_loop == true
        Thread.pass
      end
    
          it 'sets the regeneration marker to expire' do
        allow(RegenerationWorker).to receive(:perform_async)
        get :show
        expect(Redis.current.ttl('account:#{user.account_id}:regeneration')).to be >= 0
      end
    
      attr_reader :resource, :strip
    
        fi = FormulaInstaller.new(f)
    fi.options = options
    fi.build_bottle = ARGV.build_bottle? || (!f.bottled? && f.build.bottle?)
    fi.installed_on_request = !ARGV.named.empty?
    fi.link_keg           ||= keg_was_linked if keg_had_linked_opt
    if tab
      fi.installed_as_dependency = tab.installed_as_dependency
      fi.installed_on_request  ||= tab.installed_on_request
    end
    fi.prelude
    
          def core_gem_names
        %w(capistrano airbrussh rake sshkit net-ssh) & Gem.loaded_specs.keys
      end
    
            raise t('error.invalid_stage_name', name: invalid, path: stage_config_path.join('#{invalid}.rb'))
      end
    end
  end
end

    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end