
        
              template.resolve!(
        project_name: params[:project].presence,
        fullname: params[:fullname].presence || current_user&.name
      )
    
          args [:secret]
    
    describe GroupMemberPresenter do
  let(:user) { double(:user) }
  let(:group) { double(:group) }
  let(:group_member) { double(:group_member, source: group) }
  let(:presenter) { described_class.new(group_member, current_user: user) }
    
              if badge.persisted?
            present_badges(source, badge)
          else
            render_validation_error!(badge)
          end
        end
    
          unless File.exists?(File.join(Docs.store_path, '#{doc.path}.tar.gz'))
        puts 'ERROR: package for '#{doc.slug}' documentation not found. Run 'thor docs:package #{doc.slug}' to create it.'
        return
      end
    end
    
          base_dir = Pathname.new(normalized_path)
      base_dir = base_dir.parent unless path.end_with? '/'
    
            # Move id attributes to headings
        css('.method-detail').each do |node|
          next unless heading = node.at_css('.method-heading')
          heading['id'] = node['id']
          node.remove_attribute 'id'
        end
    
              # Differentiate server classes (http, https, net, etc.)
          name.sub!('server.') { '#{(klass || 'https').sub('.', '_').downcase}.' }
          # Differentiate socket classes (net, dgram, etc.)
          name.sub!('socket.') { '#{klass.sub('.', '_').downcase}.' }
    
            begin
          Component.new.handle_exception exception
          pass
        rescue StandardError
          flunk 'failed handling a nil backtrace'
        end
      end
    end
  end
    
      it 'allows delayed scheduling of AR class methods' do
    ss = Sidekiq::ScheduledSet.new
    assert_equal 0, ss.size
    MyModel.delay_for(5.days).long_class_method
    assert_equal 1, ss.size
  end
    
        after do
      Sidekiq::Testing.disable!
    end