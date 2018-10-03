
        
                  def render_collection
            @collection.map do |item|
              value = value_for_collection(item, @value_method)
              text  = value_for_collection(item, @text_method)
              default_html_options = default_html_options_for_collection(item, value)
              additional_html_options = option_html_attributes(item)
    
    require 'action_view/helpers/tags/collection_helpers'
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
    module ActionView
  # This is the main entry point for rendering. It basically delegates
  # to other objects like TemplateRenderer and PartialRenderer which
  # actually renders the template.
  #
  # The Renderer will parse the options from the +render+ or +render_body+
  # method and render a partial or a template based on the options. The
  # +TemplateRenderer+ and +PartialRenderer+ objects are wrappers which do all
  # the setup and logic necessary to render a view and a new object is created
  # each time +render+ is called.
  class Renderer
    attr_accessor :lookup_context
    
    end

    
            post_args[:topic].notify_muted!(user)
        expect {
          Fabricate(:post, user: user2, topic: post.topic, raw: 'hello @' + user.username)
        }.to change(user.notifications, :count).by(0)
      end
    end
    
    UserOption.where(user_id: -1).update_all(
  email_private_messages: false,
  email_direct: false
)
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
        case params
    when EventFilter.push
      events.where(action: Event::PUSHED)
    when EventFilter.merged
      events.where(action: Event::MERGED)
    when EventFilter.comments
      events.where(action: Event::COMMENTED)
    when EventFilter.team
      events.where(action: [Event::JOINED, Event::LEFT, Event::EXPIRED])
    when EventFilter.issue
      events.where(action: [Event::CREATED, Event::UPDATED, Event::CLOSED, Event::REOPENED])
    end
  end
    
          private
    
            # Expiration, revocation and scopes are verified in `validate_access_token!`
        oauth_token = OauthAccessToken.by_token(token)
        raise UnauthorizedError unless oauth_token
    
              <<-SQL.strip_heredoc
            (CASE
              WHEN (#{builds}) = (#{skipped}) AND (#{warnings}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{skipped}) THEN #{STATUSES[:skipped]}
              WHEN (#{builds}) = (#{success}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{created}) THEN #{STATUSES[:created]}
              WHEN (#{builds}) = (#{success}) + (#{skipped}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{success}) + (#{skipped}) + (#{canceled}) THEN #{STATUSES[:canceled]}
              WHEN (#{builds}) = (#{created}) + (#{skipped}) + (#{pending}) THEN #{STATUSES[:pending]}
              WHEN (#{running}) + (#{pending}) > 0 THEN #{STATUSES[:running]}
              WHEN (#{manual}) > 0 THEN #{STATUSES[:manual]}
              WHEN (#{created}) > 0 THEN #{STATUSES[:running]}
              ELSE #{STATUSES[:failed]}
            END)
          SQL
        end
      end
    
              @pipeline = @project.pipelines.latest_successful_for(@ref)
        end
    
            def initialize(project, ref)
          @project = project
          @ref = ref
    
            def key_width
          62
        end
    
          it 'requires the passwords to match' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Create User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
        it 'shows all options for agents that can be scheduled, create and receive events' do
      select_agent_type('Website Agent scrapes')
      expect(page).not_to have_content('This type of Agent cannot create events.')
    end
    
      def guid_order(agent_list, agent_name)
    agent_list.map{|a|a.guid}.sort.find_index(agents(agent_name).guid)
  end
end

    
          def db_path
        File.join path, DB_FILENAME
      end
    
        def initialize
      @entries = []
      @index = Set.new
      @types = Hash.new { |hash, key| hash[key] = Type.new key }
    end
    
        def as_json
      @pages
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        def request(urls, options = {}, &block)
      requests = [urls].flatten.map do |url|
        build_and_queue_request(url, options, &block)
      end
      requests.length == 1 ? requests.first : requests
    end
    
            css('h1 + code').each do |node|
          node.before('<p></p>')
          while node.next_element.name == 'code'
            node.previous_element << ' '
            node.previous_element << node.next_element
          end
          node.previous_element.prepend_child(node)
        end
    
    class FiltersController < ApplicationController
  include Authorization
    
        def filtered_instances
      InstanceFilter.new(filter_params).results
    end
    
        def create
      authorize :status, :update?
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def hub_mode
    params['hub.mode']
  end
    
    # grab name/url pairings from README.md
readme = File.open('README.md', 'r')
contents = readme.read
matches = contents.scan(/\* (.*) (http.*)/)
    
        def pos
      byte_to_str_pos @s.pos
    end
    
        # replace CSS rule blocks matching rule_prefix with yield(rule_block, rule_pos)
    # will also include immediately preceding comments in rule_block
    #
    # option :comments -- include immediately preceding comments in rule_block
    #
    # replace_rules('.a{ \n .b{} }', '.b') { |rule, pos| '>#{rule}<'  } #=> '.a{ \n >.b{}< }'
    def replace_rules(less, selector = SELECTOR_RE, options = {}, &block)
      options       = {prefix: true, comments: true}.merge(options || {})
      less          = less.dup
      s             = CharStringScanner.new(less)
      rule_re       = if options[:prefix]
                        /(?:#{selector}[#{SELECTOR_CHAR})=(\s]*?#{RULE_OPEN_BRACE_RE})/
                      else
                        /#{selector}[\s]*#{RULE_OPEN_BRACE_RE}/
                      end
      rule_start_re = if options[:comments]
                        /(?:#{COMMENT_RE}*)^#{rule_re}/
                      else
                        /^#{rule_re}/
                      end
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false