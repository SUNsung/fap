
        
            context '(de)activating users' do
      it 'does not show deactivation buttons for the current user' do
        visit admin_users_path
        expect(page).to have_no_css('a[href='/admin/users/#{users(:jane).id}/deactivate']')
      end
    
      it 'renders the import form' do
    visit new_scenario_imports_path
    expect(page).to have_text('Import a Public Scenario')
  end
    
    describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
            if is_navigational_format?
          session.delete(session_key)
        else
          session[session_key]
        end
      end
    
          # Configure default email options
      def devise_mail(record, action, opts = {}, &block)
        initialize_from_record(record)
        mail headers_for(action, opts), &block
      end
    
          @class_name = (options[:class_name] || name.to_s.classify).to_s
      @klass = Devise.ref(@class_name)
    
          accessors.each do |accessor|
        mod.class_eval <<-METHOD, __FILE__, __LINE__ + 1
          def #{accessor}
            if defined?(@#{accessor})
              @#{accessor}
            elsif superclass.respond_to?(:#{accessor})
              superclass.#{accessor}
            else
              Devise.#{accessor}
            end
          end
    
      require 'cocoapods/core_overrides'
end

    
          # Prints a title taking an optional verbose prefix and
      # a relative indentation valid for the UI action in the passed
      # block.
      #
      # In verbose mode titles are printed with a color according
      # to their level. In normal mode titles are printed only if
      # they have nesting level smaller than 2.
      #
      # @todo Refactor to title (for always visible titles like search)
      #       and sections (titles that represent collapsible sections).
      #
      # @param [String] title
      #        The title to print
      #
      # @param [String] verbose_prefix
      #        See #message
      #
      # @param [FixNum] relative_indentation
      #        The indentation level relative to the current,
      #        when the message is printed.
      #
      def section(title, verbose_prefix = '', relative_indentation = 0)
        if config.verbose?
          title(title, verbose_prefix, relative_indentation)
        elsif title_level < 1
          puts title
        end
    
          # Taken from https://stackoverflow.com/questions/195740/how-do-you-do-relative-time-in-rails
      def pretty_date(date_string)
        date = Time.parse(date_string)
        a = (Time.now - date).to_i