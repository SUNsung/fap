
        
          def include_url?
    url.present?
  end
    
    def usage
  <<-EOS
list_running_app_ids [ -t <bundle-id> ]
    
      belongs_to :status_message
  has_many :poll_answers, -> { order 'id ASC' }, dependent: :destroy
  has_many :poll_participations, dependent: :destroy
  has_one :author, through: :status_message
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
          if @options[:to] == @options[:from] && !@options[:in_place]
        fmt = @options[:from]
        raise 'Error: converting from #{fmt} to #{fmt} without --in-place'
      end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end