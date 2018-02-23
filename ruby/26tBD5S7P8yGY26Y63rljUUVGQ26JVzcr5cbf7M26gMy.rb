
        
          # any user that is either a moderator or an admin
  def staff?
    admin || moderator
  end
    
            attr_writer :log_levels
    
    (import 'mDNSResponder.sb')
    
            private
    
            def initialize(argv)
          @name = argv.shift_argument
          @template_url = argv.option('template-url', TEMPLATE_REPO)
          super
          @additional_args = argv.remainder!
        end
    
            sets = config.sources_manager.aggregate.all_sets
        sets.each { |set| UI.pod(set, :name_and_version) }
        UI.puts '\n#{sets.count} pods were found'
      end