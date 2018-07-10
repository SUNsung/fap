
        
              # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          @sign_out_via = options[:sign_out_via] || Devise.sign_out_via
      @format = options[:format]
    
          def key?(key)
        super(convert_key(key))
      end
    
            opts = OptionParser.new do |o|
          o.banner = 'Usage: vagrant cap [options] TYPE NAME [args]'
          o.separator ''
          o.separator 'This is an advanced command. If you don't know what this'
          o.separator 'does and you aren't explicitly trying to use it, you probably'
          o.separator 'don't want to use this.'
          o.separator ''
          o.separator 'This command checks or executes arbitrary capabilities that'
          o.separator 'Vagrant has for hosts, guests, and providers.'
          o.separator ''
          o.separator 'Options:'
          o.separator ''
    
        def type_from_mime_magic
      @type_from_mime_magic ||= File.open(@filepath) do |file|
        MimeMagic.by_magic(file).try(:type)
      end
    end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
        def self.included(base)
      ActiveRecord::ConnectionAdapters::Table.send :include, TableDefinition
      ActiveRecord::ConnectionAdapters::TableDefinition.send :include, TableDefinition
      ActiveRecord::ConnectionAdapters::AbstractAdapter.send :include, Statements
      ActiveRecord::Migration::CommandRecorder.send :include, CommandRecorder
    end