
        
              plist_filename = if f.plist
        f.plist_path.basename
      else
        File.basename Dir['#{keg}/*.plist'].first
      end
      plist_link = '#{destination}/#{plist_filename}'
      plist_domain = f.plist_path.basename('.plist')
      destination_path = Pathname.new File.expand_path destination
      plist_path = destination_path/plist_filename
    
    puts 'Deduping #{links.size} links...'
    
        def as_json
      @pages
    end
    
        def initialize(*args)
      if args.empty?
        super(*Array.new(9))
      elsif args.length == 1 && args.first.is_a?(Hash)
        args.first.assert_valid_keys URI::Generic::COMPONENT
        super(*args.first.values_at(*URI::Generic::COMPONENT))
      else
        super
      end
    end
    
          def stack
        UI::ErrorReport.stack
      end
    
            def initialize(argv)
          @name = argv.shift_argument
          @template_url = argv.option('template-url', TEMPLATE_REPO)
          super
          @additional_args = argv.remainder!
        end
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
      def pretty?
    params.has_key?('pretty')
  end
    
    module LogStash
  module Api
    class Service
      include LogStash::Util::Loggable