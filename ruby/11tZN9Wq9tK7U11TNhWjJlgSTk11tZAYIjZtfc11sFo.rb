
        
          def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        def make
      geometry = GeometryParser.new(geometry_string.strip).make
      geometry || raise(Errors::NotIdentifiedByImageMagickError.new)
    end