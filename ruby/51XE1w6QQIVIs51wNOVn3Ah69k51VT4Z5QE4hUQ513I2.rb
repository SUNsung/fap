
        
          def test_hash2
    assert_kind_of(Integer, @cls[].hash)
    h = @cls[1=>2]
    h.shift
    assert_equal({}.hash, h.hash, '[ruby-core:38650]')
    bug9231 = '[ruby-core:58993] [Bug #9231]'
    assert_not_equal(0, @cls[].hash, bug9231)
  end
    
            time.sec.should == 60
        time.min.should == 59
        time.hour.should == 23
        time.day.should == 30
        time.month.should == 6
      end
    end
  end
    
        uninstall login_item: 'login item name'
    
            def <<(value)
          values << value
        end
    
      tasks_dir = Pathname.new('lib/capistrano/tasks')
  config_dir = Pathname.new('config')
  deploy_dir = config_dir.join('deploy')
    
            context 'with filter options' do
          subject { dsl.release_roles(:all, filter: :active) }
    
        module ClassMethods
      def attachment_definitions
        Paperclip::AttachmentRegistry.definitions_for(self)
      end
    end
  end
end

    
          if app.config.respond_to?(:paperclip_defaults)
        Paperclip::Attachment.default_options.merge!(app.config.paperclip_defaults)
      end
    end
    
          def has_attached_file(*attachment_names)
        ActiveSupport::Deprecation.warn 'Method `t.has_attached_file` in the migration has been deprecated and will be replaced by `t.attachment`.'
        attachment(*attachment_names)
      end
    end