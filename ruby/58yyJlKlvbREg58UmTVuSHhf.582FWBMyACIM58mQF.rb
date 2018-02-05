  def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
            command = [adb_path, 'devices'].join(' ')
        output = Actions.sh(command, log: false)
        output.split('\n').each do |line|
          if (result = line.match(/(.*)\tdevice$/))
            self.devices << AdbDevice.new(serial: result[1])
          end
        end
        self.devices
      end
    end
  end
end

    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=/tmp/cloc.xml')
      end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    class DeviseCreateUsers < ActiveRecord::Migration
  def change
    create_table(:users) do |t|
      t.string :email,              null: false
      t.string :encrypted_password, null: true
      t.timestamps null: false
    end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
          def key?(key)
        super(convert_key(key))
      end
    
          opts.on('-?', '-h', '--help', 'Show this help message.') do
        puts opts
        exit
      end
    
      # GET /books/1/edit
  def edit
  end
    
              new_source =
            node.receiver.source + ' =~ ' + node.first_argument.source
    
            def repeated_condition?(previous, condition)
          previous.any? { |c| c.include?(condition) }
        end
      end
    end
  end
end

    
            def parent_block_node(node)
          node.each_ancestor(:block).first
        end
      end
    end
  end
end

    
      context 'called with two styles' do
    it 'applies to alternating sides' do
      rule = 'border-style: dotted dashed'
    
      context 'called with three widths' do
    it 'applies second width to left and right' do
      rule = 'border-width: 4px 5px 6px'