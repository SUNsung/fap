
        
        require 'bundler/setup'
require 'json'
require 'stackprof'
require File.expand_path('../lib/jekyll', __dir__)
    
        # --
    # NOTE: Pathutil#in_path? gets the realpath.
    # @param [<Anything>] entry the entry you want to validate.
    # Check if a path is outside of our given root.
    # --
    def symlink_outside_site_source?(entry)
      !Pathutil.new(entry).in_path?(
        site.in_source_dir
      )
    end
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
        # Gets/Sets the extension of this layout.
    attr_accessor :ext
    
            self
      end
    
      nfs_setting = RUBY_PLATFORM =~ /darwin/ || RUBY_PLATFORM =~ /linux/
  config.vm.synced_folder '.', '/vagrant', id: 'vagrant-root'
    
      class FeatureTopicUsers < Jobs::Base
    
        sidekiq_options queue: 'critical'
    
      def regular?
    !staff?
  end
    
      def url
    object.metadata.url
  end
    
        it 'should have a way of getting the service configurations' do
      configs = key.service_configs_for(Spaceship::Portal::Key::MUSIC_KIT_ID)
      expect(configs).to be_instance_of(Array)
      expect(configs.sample).to be_instance_of(Hash)
      expect(configs.first['identifier']).to eq('music.com.snatchev.test')
    end
    
        # @deprecated Use <tt>git_author_email</tt> instead
    # Get the author email of the last git commit
    # <b>DEPRECATED:</b> Use <tt>git_author_email</tt> instead.
    def self.git_author
      UI.deprecated('`git_author` is deprecated. Please use `git_author_email` instead.')
      git_author_email
    end
    
        class GradleHelper
      # Path to the gradle script
      attr_accessor :gradle_path
    
            expect(result).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
          it 'it increments all targets minor version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'minor')
        end').runner.execute(:test)
    
        if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
    Rails.application.routes.draw do
  devise_for :users
    
        def relative_url_root
      @relative_url_root ||= begin
        config = Rails.application.config
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: tag_url(@tag),
      type: :ordered,
      size: @tag.statuses.count,
      items: @statuses.map { |s| ActivityPub::TagManager.instance.uri_for(s) }
    )
  end
    
          it 'renders application layout' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to render_template layout: 'application'
      end
    end
    
            # This is a convenient way to check whether the variable is used
        # in its entire variable lifetime.
        # For more precise usage check, refer Assignment#used?.
        #
        # Once the variable is captured by a block, we have no idea
        # when, where and how many times the block would be invoked
        # and it means we cannot track the usage of the variable.
        # So we consider it's used to suppress false positive offenses.
        def used?
          @captured_by_block || referenced?
        end
    
    module RuboCop
  module Cop
    module Layout
      # Checks for unnecessary additional spaces inside array percent literals
      # (i.e. %i/%w).
      #
      # @example
      #
      #   # bad
      #   %w(foo  bar  baz)
      #   # good
      #   %i(foo bar baz)
      class SpaceInsideArrayPercentLiteral < Cop
        include MatchRange
        include PercentLiteral
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
              lambda do |corrector|
            corrector.replace(center.source_range, new_center)
          end
        end
      end
    end
  end
end

    
              FROZEN_STRING_LITERAL_TYPES.include?(node.type) &&
            frozen_string_literals_enabled?
        end
      end
    end
  end
end

    
          expect('.border-color-explicit').to have_rule(rule)
    end
  end
    
      context 'called with four styles' do
    it 'applies different styles to all sides' do
      rule = 'border-style: dotted groove ridge none'
    
      context 'expands plain buttons' do
    it 'finds selectors' do
      list = @buttons_list.join(', ')
      ruleset = 'content: #{list};'
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      ruleset = 'position: absolute; ' +
                'top: 2px; ' +
                'right: 3px; ' +
                'bottom: 2px; ' +
                'left: 3px;'
    
          expect('.all-text-inputs-invalid').to have_ruleset(ruleset)
    end
  end
end
