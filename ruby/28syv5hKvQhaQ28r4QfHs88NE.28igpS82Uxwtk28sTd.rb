  def regular?
    !staff?
  end
    
      protected
    
    platforms :jruby do
  gem 'activerecord-jdbc-adapter'
  gem 'activerecord-jdbcsqlite3-adapter'
  gem 'jruby-openssl'
end
    
    # grab name/url pairings from README.md
contents = File.read INPUT_FILENAME
matches = contents.scan(/\* (.*) (http.*)/)
# All blogs that do not respond
unavailable = []
temp_ignores = [
  'AdRoll',
  'Buzzfeed',
  'SourceClear',
  'TaskRabbit',
  'theScore',
  'Trivago',
  'Xmartlabs',
  'WyeWorks',
  'Zoosk',
  'Rudolf Olah'
]
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end
    
          expect('.all-buttons-focus').to have_ruleset(ruleset)
    end
  end
    
      context 'called with no prefixes' do
    it 'outputs the spec' do
      rule = 'appearance: none;'