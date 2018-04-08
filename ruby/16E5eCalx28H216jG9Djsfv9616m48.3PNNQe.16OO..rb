
        
        def list_login_items_for_app(app_path)
  out, err, status = Open3.capture3(
    '/usr/bin/osascript', '-e',
    'tell application \'System Events\' to get the name of every login item ' \
    'whose path contains \'#{File.basename(app_path)}\''
  )
  if status.exitstatus > 0
    $stderr.puts err
    exit status.exitstatus
  end
  puts out.gsub(', ', '\n')
end
    
    def load_apps
  out, err, status = Open3.capture3('/usr/bin/osascript', '-e', 'tell application 'System Events' to get (name, bundle identifier, unix id) of every process')
  if status.exitstatus > 0
    puts err
    exit status.exitstatus
  end
  out = out.split(', ')
  one_third   = out.length / 3
  @app_names  = out.shift(one_third)
  @bundle_ids = out.shift(one_third)
  @unix_ids   = out.shift(one_third)
end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        def define_query
      name = @name
      @klass.send :define_method, '#{@name}?' do
        send(name).file?
      end
    end
    
      class Railtie < Rails::Railtie
    initializer 'paperclip.insert_into_active_record' do |app|
      ActiveSupport.on_load :active_record do
        Paperclip::Railtie.insert
      end
    
      context 'called with arguments (2, $value: 4em 6em)' do
    it 'outputs sextuple the second value from the default scale' do
      expect('.two-double-value').to have_rule('font-size: 3.125em')
    end
  end
end

    
          expect('.size-implicit').to have_ruleset(rule)
    end
  end