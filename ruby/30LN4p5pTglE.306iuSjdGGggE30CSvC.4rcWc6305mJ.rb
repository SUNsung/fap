
        
            # Fetch YAML front-matter data from related doc, without layout key
    #
    # Returns Hash of doc data
    def data
      @data ||= doc.data.dup
      @data.delete('layout')
      @data.delete('excerpt')
      @data
    end
    
    module Jekyll
  module External
    class << self
      #
      # Gems that, if installed, should be loaded.
      # Usually contain subcommands.
      #
      def blessed_gems
        %w(
          jekyll-docs
          jekyll-import
        )
      end
    
      module ClassMethods
    def load_types_in(module_name, my_name = module_name.singularize)
      const_set(:MODULE_NAME, module_name)
      const_set(:BASE_CLASS_NAME, my_name)
      const_set(:TYPES, Dir[Rails.root.join('app', 'models', module_name.underscore, '*.rb')].map { |path| module_name + '::' + File.basename(path, '.rb').camelize })
    end
    
        def run!
      @thread = Thread.new do
        Thread.current[:name] = '#{id}-#{Time.now}'
        begin
          run
        rescue SignalException, SystemExit
          stop!
        rescue StandardError => e
          message = '#{id} Exception #{e.message}:\n#{e.backtrace.first(10).join('\n')}'
          AgentRunner.with_connection do
            agent.error(message)
          end
        end
      end
    end
    
        respond_to do |format|
      format.html
      format.json {
        send_data Utils.pretty_jsonify(@user_credentials.limit(nil).as_json), disposition: 'attachment'
      }
    end
  end
    
      context 'called with one color' do
    it 'applies same color to all sides' do
      rule = 'border-color: #f00'
    
          expect('.border-width-implied-left').to have_rule(rule)
    end
  end
    
        @inputs_list = %w(
      [type='color']
      [type='date']
      [type='datetime']
      [type='datetime-local']
      [type='email']
      [type='month']
      [type='number']
      [type='password']
      [type='search']
      [type='tel']
      [type='text']
      [type='time']
      [type='url']
      [type='week']
      input:not([type])
      textarea
    )
  end