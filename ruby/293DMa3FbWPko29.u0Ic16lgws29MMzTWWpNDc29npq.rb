
        
              if record.created_at.nil? || record.created_at >= now || record.created_at == record.updated_at
        yield
      else
        record.id = Mastodon::Snowflake.id_at(record.created_at)
        tries     = 0
    
      task :ensure_id_sequences_exist do
    each_schema_load_environment do
      Mastodon::Snowflake.ensure_id_sequences_exist
    end
  end
end

    
      def text_url
    object.local? ? medium_url(object) : nil
  end
    
      describe 'GET #show' do
    let!(:tag)     { Fabricate(:tag, name: 'test') }
    let!(:local)   { Fabricate(:status, tags: [tag], text: 'local #test') }
    let!(:remote)  { Fabricate(:status, tags: [tag], text: 'remote #test', account: Fabricate(:account, domain: 'remote')) }
    let!(:late)    { Fabricate(:status, tags: [tag], text: 'late #test') }
    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
        it 'leaves the domains status and attachements, but clears media' do
      expect { bad_status1.reload }.not_to raise_error
      expect { bad_status2.reload }.not_to raise_error
      expect { bad_attachment.reload }.not_to raise_error
      expect(bad_attachment.file.exists?).to be false
    end
  end
end

    
    module Sass::Exec
  # The `sass-convert` executable.
  class SassConvert < Base
    # @param args [Array<String>] The command-line arguments
    def initialize(args)
      super
      require 'sass'
      @options[:for_tree] = {}
      @options[:for_engine] = {:cache => false, :read_cache => true}
    end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end
    
        # @param queries [Array<Query>] See \{#queries}
    def initialize(queries)
      @queries = queries
    end
    
        # @see Node#to_sass
    def to_sass(opts = {})
      return to_quoted_equivalent.to_sass if deprecation == :immediate
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end