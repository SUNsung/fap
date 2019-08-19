
        
            it 'does not permit path traversal requests' do
      expect { finder.find('../foo') }.to raise_error(/Invalid path/)
    end
  end
    
        # Ensure the file is removed
    project.bfg_object_map.remove!
    notification_service.repository_cleanup_failure(project, user, error)
  end
    
          def filter_options(**options)
        @filter_options.merge!(options)
      end
    
    puts 'Configuring Bundler for #{rails_env} environment and #{database} database.'
    
          rescue_from Api::OpenidConnect::Error::InvalidRedirectUri do |e|
        validation_fail_redirect_uri(e)
      end
    
      def create
    # Contacts autocomplete does not work the same way on mobile and desktop
    # Mobile returns contact ids array while desktop returns person id
    # This will have to be removed when mobile autocomplete is ported to Typeahead
    recipients_param, column = [%i(contact_ids id), %i(person_ids person_id)].find {|param, _| params[param].present? }
    if recipients_param
      person_ids = current_user.contacts.mutual.where(column => params[recipients_param].split(',')).pluck(:person_id)
    end
    
      respond_to :html, :mobile
  respond_to :json, :only => :show
    
          def right_diff_line_number(id, line)
        if line =~ /^@@/
          m, ri                   = *line.match(/\+(\d+)/)
          @right_diff_line_number = ri.to_i
          @current_line_number    = @right_diff_line_number
          ret                     = '...'
        elsif line[0] == ?-
          ret = ' '
        elsif line[0] == ?+
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        else
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        end
        ret
      end
    end
  end
end

    
          def page_name
        @name.gsub('-', ' ')
      end
    
          attr_reader :page, :page_num, :allow_editing
    
      test 'displays_latest_changes' do
    get('/latest_changes')
    body = last_response.body
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    desc 'Update version number and gemspec'
task :bump do
  puts 'Updated version to #{bump_version}'
  # Execute does not invoke dependencies.
  # Manually invoke gemspec then validate.
  Rake::Task[:gemspec].execute
  Rake::Task[:validate].execute
end
    
          begin
        wiki.write_page(name, format, params[:content], commit_message, path)
    
          def regexp_to_xpath_conditions(regexp)
        condition = XPath.current
        condition = condition.uppercase if regexp.casefold?
        Selector::RegexpDisassembler.new(regexp).alternated_substrings.map do |strs|
          strs.map { |str| condition.contains(str) }.reduce(:&)
        end.reduce(:|)
      end
    end
  end
end

    
      it 'should assert no matching ancestor' do
    el = @session.find(:css, '#ancestor1')
    expect(el).to have_no_ancestor(:css, '#child')
    expect(el).to have_no_ancestor(:css, '#ancestor1_sibiling')
    expect(el).not_to have_ancestor(:css, '#child')
    expect(el).not_to have_ancestor(:css, '#ancestor1_sibiling')
  end
end

    
    module Capybara
  module Node
    module Finders
      ##
      #
      # Find an {Capybara::Node::Element} based on the given arguments. {#find} will raise an error if the element
      # is not found.
      #
      #     page.find('#foo').find('.bar')
      #     page.find(:xpath, './/div[contains(., 'bar')]')
      #     page.find('li', text: 'Quox').click_link('Delete')
      #
      # @param (see #all)
      #
      # @macro waiting_behavior
      #
      # @!macro system_filters
      #   @option options [String, Regexp] text      Only find elements which contain this text or match this regexp
      #   @option options [String, Boolean] exact_text
      #     When String the elements contained text must match exactly, when Boolean controls whether the `text` option must match exactly.
      #     Defaults to {Capybara.configure exact_text}.
      #   @option options [Boolean] normalize_ws
      #     Whether the `text`/`exact_text` options are compared against elment text with whitespace normalized or as returned by the driver.
      #     Defaults to {Capybara.configure default_normalize_ws}.
      #   @option options [Boolean, Symbol] visible  Only find elements with the specified visibility:
      #                                              * true - only finds visible elements.
      #                                              * false - finds invisible _and_ visible elements.
      #                                              * :all - same as false; finds visible and invisible elements.
      #                                              * :hidden - only finds invisible elements.
      #                                              * :visible - same as true; only finds visible elements.
      #   @option options [Boolean] obscured  Only find elements with the specified obscured state:
      #                                       * true - only find elements whose centerpoint is not in the viewport or is obscured by another non-descendant element.
      #                                       * false - only find elements whose centerpoint is in the viewport and is not obscured by other non-descendant elements.
      #   @option options [String, Regexp]  id           Only find elements with an id that matches the value passed
      #   @option options [String, Array<String>, Regexp] class  Only find elements with matching class/classes.
      #                                            * Absence of a class can be checked by prefixing the class name with `!`
      #                                            * If you need to check for existence of a class name that starts with `!` then prefix with `!!`
      #
      #                                                class:['a', '!b', '!!!c'] # limit to elements with class 'a' and '!c' but not class 'b'
      #
      #   @option options [String, Regexp, Hash] style  Only find elements with matching style. String and Regexp will be checked against text of the elements `style` attribute, while a Hash will be compared against the elements full style
      #   @option options [Boolean] exact            Control whether `is` expressions in the given XPath match exactly or partially. Defaults to {Capybara.configure exact}.
      #   @option options [Symbol] match        The matching strategy to use. Defaults to {Capybara.configure match}.
      #
      # @return [Capybara::Node::Element]      The found element
      # @raise  [Capybara::ElementNotFound]    If the element can't be found before time expires
      #
      def find(*args, **options, &optional_filter_block)
        options[:session_options] = session_options
        synced_resolve Capybara::Queries::SelectorQuery.new(*args, options, &optional_filter_block)
      end
    
          def initialize(app)
        @app = app
        @disable_markup = format(DISABLE_MARKUP_TEMPLATE, selector: self.class.selector_for(Capybara.disable_animation))
      end
    
    module Capybara
  class SessionConfig
    OPTIONS = %i[always_include_port run_server default_selector default_max_wait_time ignore_hidden_elements
                 automatic_reload match exact exact_text raise_server_errors visible_text_only
                 automatic_label_click enable_aria_label save_path asset_host default_host app_host
                 server_host server_port server_errors default_set_options disable_animation test_id
                 predicates_wait default_normalize_ws w3c_click_offset].freeze