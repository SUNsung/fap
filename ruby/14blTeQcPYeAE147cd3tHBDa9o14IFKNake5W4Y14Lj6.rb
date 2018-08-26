
        
            if version.present?
      doc = doc.versions.find { |klass| klass.version == version || klass.version_slug == version }
      raise DocNotFound.new(%(could not find version '#{version}' for doc '#{name}'), name) unless doc
    elsif version != false
      doc = doc.versions.first
    end
    
        def length
      @entries.length
    end
    
        def xpath(*args)
      doc.xpath(*args)
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def as_json
      @pages
    end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
            css('a.is-button > h3').each do |node|
          node.parent.content = node.content
        end
    
      def set_filters
    @filters = current_account.custom_filters
  end
    
      def set_size
    case params[:id]
    when 'featured'
      @account.pinned_statuses.count
    else
      raise ActiveRecord::NotFound
    end
  end
    
          @account_moderation_note = current_account.account_moderation_notes.new(resource_params)
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
    class Api::SubscriptionsController < Api::BaseController
  before_action :set_account
  respond_to :txt
    
        it 'corrects one hash parameter with braces and whitespace' do
      corrected = autocorrect_source(['where(  ',
                                      ' { x: 1 }   )'].join('\n'))
      expect(corrected).to eq(['where(  ',
                               ' x: 1   )'].join('\n'))
    end
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
    shared_examples_for 'multiline literal brace layout method argument' do
  include MultilineLiteralBraceHelper
    
    module RuboCop
  # Common methods and behaviors for dealing with paths.
  module PathUtil
    module_function
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end