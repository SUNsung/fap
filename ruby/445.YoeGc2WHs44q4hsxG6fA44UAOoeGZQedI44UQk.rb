
        
                val ? true : false
      end
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
            def collection_method
          :lfs_objects
        end
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
        context 'multiple arguments' do
      before do
        subject.instance_eval do
          env :userpaths, :std
        end
      end
    
        execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        it 'paginates the notifications' do
      25.times { FactoryGirl.create(:notification, :recipient => alice, :target => @post) }
      get :index
      expect(assigns[:notifications].count).to eq(25)
      get :index, params: {page: 2}
      expect(assigns[:notifications].count).to eq(1)
    end
    
      # Compile a Sass or SCSS string to CSS.
  # Defaults to SCSS.
  #
  # @param contents [String] The contents of the Sass file.
  # @param options [{Symbol => Object}] An options hash;
  #   see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  def self.compile(contents, options = {})
    options[:syntax] ||= :scss
    Engine.new(contents, options).to_css
  end
    
        # Return the first {Sass::Selector::SimpleSequence} in a
    # {Sass::Tree::RuleNode}.
    #
    # @param rule [Sass::Tree::RuleNode]
    # @return [Sass::Selector::SimpleSequence, String]
    def first_sseq(rule)
      first_seq(rule).members.first
    end
    
              options = { variants_attrs: variants_params, options_attrs: option_types_params }
          @product = Core::Importer::Product.new(@product, product_params, options).update
    
          include Grape::DSL::Configuration