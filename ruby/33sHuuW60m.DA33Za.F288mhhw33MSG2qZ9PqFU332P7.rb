
        
              # Need to experiment if this priority is the best one: rendered => output_buffer
      def document_root_element
        Nokogiri::HTML::Document.parse(@rendered.blank? ? @output_buffer : @rendered).root
      end
    
          def cast(value)
        raise value unless value == 'value from user'
        'cast value'
      end
    
      has_many :clients, -> { order 'id' }, dependent: :destroy, before_remove: :log_before_remove, after_remove: :log_after_remove
  has_many :unsorted_clients, class_name: 'Client'
  has_many :unsorted_clients_with_symbol, class_name: :Client
  has_many :clients_sorted_desc, -> { order 'id DESC' }, class_name: 'Client'
  has_many :clients_of_firm, -> { order 'id' }, foreign_key: 'client_of', class_name: 'Client', inverse_of: :firm
  has_many :clients_ordered_by_name, -> { order 'name' }, class_name: 'Client'
  has_many :unvalidated_clients_of_firm, foreign_key: 'client_of', class_name: 'Client', validate: false
  has_many :dependent_clients_of_firm, -> { order 'id' }, foreign_key: 'client_of', class_name: 'Client', dependent: :destroy
  has_many :exclusively_dependent_clients_of_firm, -> { order 'id' }, foreign_key: 'client_of', class_name: 'Client', dependent: :delete_all
  has_many :limited_clients, -> { limit 1 }, class_name: 'Client'
  has_many :clients_with_interpolated_conditions, ->(firm) { where 'rating > #{firm.rating}' }, class_name: 'Client'
  has_many :clients_like_ms, -> { where('name = 'Microsoft'').order('id') }, class_name: 'Client'
  has_many :clients_like_ms_with_hash_conditions, -> { where(name: 'Microsoft').order('id') }, class_name: 'Client'
  has_many :plain_clients, class_name: 'Client'
  has_many :clients_using_primary_key, class_name: 'Client',
           primary_key: 'name', foreign_key: 'firm_name'
  has_many :clients_using_primary_key_with_delete_all, class_name: 'Client',
           primary_key: 'name', foreign_key: 'firm_name', dependent: :delete_all
  has_many :clients_grouped_by_firm_id, -> { group('firm_id').select('firm_id') }, class_name: 'Client'
  has_many :clients_grouped_by_name, -> { group('name').select('name') }, class_name: 'Client'
    
        server.config.cable = ActiveSupport::HashWithIndifferentAccess.new(adapter: 'async')
    
      # any user that is either a moderator or an admin
  def staff?
    admin || moderator
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
    
          config.paths['log']             = '#{Msf::Config.log_directory}/#{Rails.env}.log'
      config.paths['config/database'] = [Metasploit::Framework::Database.configurations_pathname.try(:to_path)]
    
                end
    
    class SnifferFTP < BaseProtocolParser
    
          when :login_fail
    
                  s[:proto]='pop3'
              s[:extra]='Failed Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Invalid POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
              s[:pass]=''
          end
        when nil
          # No matches, no saved state
        else
          s[:last]=matched
          sessions[s[:session]].merge!({k => matches})
      end # end case matched
    end # end of each_key
  end # end of parse
end
    
    # Sniffer class for GET URL's
class SnifferURL < BaseProtocolParser
  def register_sigs
    self.sigs = {
      :get		=> /^GET\s+([^\n]+)\s+HTTP\/\d\.\d/i,
      :webhost	=> /^HOST\:\s+([^\n\r]+)/i,
    }
  end
    
    print asm

    
    require 'rex/post/meterpreter'
    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
          private
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
      # Read and eval a .rake file in such a way that `self` within the .rake file
  # refers to this plugin instance. This gives the tasks in the file access to
  # helper methods defined by the plugin.
  def eval_rakefile(path)
    contents = IO.read(path)
    instance_eval(contents, path, 1)
  end
    
        # @abstract
    #
    # Your implementation should check if the specified remote-repository is
    # available.
    #
    # @return [Boolean]
    #
    def check
      raise NotImplementedError, 'Your SCM strategy module should provide a #check method'
    end
    
      entries = [{ template: deploy_rb, file: config_dir.join('deploy.rb') }]
  entries += envs.split(',').map { |stage| { template: stage_rb, file: deploy_dir.join('#{stage}.rb') } }
    
              add_offense(node)
        end
    
      module Comment0
  end
    
            def description
          'validate the content types allowed on attachment #{@attachment_name}'
        end