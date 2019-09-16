
        
          def generate_manifest
    Docs.generate_manifest
  end
end

    
            css('.entry-detail[id$='instance-method']').each do |node|
          name = node.at_css('.signature > strong').content.strip
          name.prepend '#{self.name}#' unless slug.end_with?('toplevel')
          id = node['id'] = node['id'].remove(/<.+?>/)
          entries << [name, id] unless entries.last && entries.last[0] == name
        end
    
        before do
      user.account.follow!(other_account)
      post :mute, params: { id: other_account.id }
    end
    
            # @return [Array<String>] The list of the UUIDs of the
        #         user targets integrated by this umbrella
        #         target.  They can be used to find the
        #         targets opening the project They can be used
        #         to find the targets opening the project with
        #         Xcodeproj.
        #
        def user_target_uuids
          user_targets.map(&:uuid)
        end
      end
    end
  end
end

    
            # Groups the collection by result of the block.
        #
        # @param [Block<Variant, #hash>] block
        # @return [Array<PodVariantSet>]
        #
        def group_by(&block)
          variants.group_by(&block).map { |_, v| PodVariantSet.new(v) }
        end
    
          alias eql? ==
    
                filename = path.basename.to_s
            file_ref = group.files.find { |f| f.display_name == filename }
            if file_ref && file_ref.path != path
              file_ref_path = Pathname.new(file_ref.real_path)
              if !file_ref_path.exist? || !xcconfig_path.exist? || file_ref_path.realpath != xcconfig_path.realpath
                file_ref.path = path.to_s
              end
            end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
          def each
        servers_by_key.values.each { |server| yield server }
      end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
          # Prints a table for a given array of records. For each record, the block
      # is yielded two arguments: the record and a Row object. To print values
      # for that record, add values using `row << 'some value'`. A row can
      # optionally be highlighted in yellow using `row.yellow`.
      def table(records, &block)
        return if records.empty?
        rows = collect_rows(records, &block)
        col_widths = calculate_column_widths(rows)
    
          it 'should have the correct hooks' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.attributes[:snap_hooks] } == original.attributes[:snap_hooks]
      end
    end
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    when 'all'
      @architecture = 'i386 value=sparc'
    end
    
        def self.register_private_key(email_address)
      registration = client.new_account(:contact => 'mailto:#{email_address}', :terms_of_service_agreed => true)
      logger.info 'Successfully registered private key with address #{email_address}'
      true
    end
    
      config.after(:suite) do
    # Remove the global server after the suite has finished running and then
    # clean the database in case it left anything lying around.
    if defined?(GLOBAL_SERVER)
      GLOBAL_SERVER.destroy
      DatabaseCleaner.clean
    end
  end
    
          conn = Bunny.new(
        :hosts => bunny_host,
        :port => Postal.config.rabbitmq&.port || 5672,
        :username => Postal.config.rabbitmq&.username || 'guest',
        :password => Postal.config.rabbitmq&.password || 'guest',
        :vhost => Postal.config.rabbitmq&.vhost || nil
      )
      conn.start
      conn
    end
    
      expansion(:status) {
    {
      :status => o.status,
      :last_delivery_attempt => o.last_delivery_attempt ? o.last_delivery_attempt.to_f : nil,
      :held => o.held == 1 ? true : false,
      :hold_expiry => o.hold_expiry ? o.hold_expiry.to_f : nil
    }
  }
    
      private
    
      private