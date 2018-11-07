
        
            # Initializes a MachineIndex at the given file location.
    #
    # @param [Pathname] data_dir Path to the directory where data for the
    #   index can be stored. This folder should exist and must be writable.
    def initialize(data_dir)
      @data_dir   = data_dir
      @index_file = data_dir.join('index')
      @lock       = Monitor.new
      @machines  = {}
      @machine_locks = {}
    
              result
        end
    
    require 'log4r'
    
      def show
    render json: collection_presenter,
           serializer: ActivityPub::CollectionSerializer,
           adapter: ActivityPub::Adapter,
           content_type: 'application/activity+json',
           skip_activities: true
  end
    
        private
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
      # replace name version and date
  replace_header(head, :name)
  replace_header(head, :version)
  replace_header(head, :date)
  #comment this out if your rubyforge_project has a different name
  replace_header(head, :rubyforge_project)
    
      class DuplicatePageError < Error
    attr_accessor :dir
    attr_accessor :existing_path
    attr_accessor :attempted_path