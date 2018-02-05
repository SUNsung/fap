
        
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
    
      # Implemented by subclasses to provide default values for settings needed by
  # this plugin. Typically done using the `set_if_empty` Capistrano DSL method.
  #
  # Example:
  #
  #   def set_defaults
  #     set_if_empty :my_plugin_option, true
  #   end
  #
  def set_defaults; end
    
      if File.exist?('Capfile')
    warn '[skip] Capfile already exists'
  else
    FileUtils.cp(capfile, 'Capfile')
    puts I18n.t(:written_file, scope: :capistrano, file: 'Capfile')
  end
    
        it 'sets the default env' do
      expect(config.default_env).to eq default_env
    end