
        
          def migration_class_name
    migration_name.camelize
  end
    
        def define_class_getter
      @klass.extend(ClassMethods)
    end
    
        # Hash assignment of interpolations. Included only for compatibility,
    # and is not intended for normal use.
    def self.[]= name, block
      define_method(name, &block)
      @interpolators_cache = nil
    end
    
        def synchronize_before?
      synchronize == true || synchronize == 'before'
    end
    
          it 'returns true' do
        expect(Tmuxinator::Doctor.shell?).to be_truthy
      end
    end
    
      context 'hook value is Array' do
    before do
      project.yaml[hook_name] = [
        'echo 'on hook'',
        'echo 'another command here''
      ]
    end
    
    describe Tmuxinator::Cli do
  shared_context :local_project_setup do
    let(:local_project_config) { '.tmuxinator.yml' }
    let(:content_fixture) { '../../fixtures/sample.yml' }
    let(:content_relpath) { File.join(File.dirname(__FILE__), content_fixture) }
    let(:content_path) { File.expand_path(content_relpath) }
    let(:content) { File.read(content_path) }
    let(:working_dir) { FileUtils.pwd }
    let(:local_project_relpath) { File.join(working_dir, local_project_config) }
    let(:local_project_path) { File.expand_path(local_project_relpath) }
    
      it 'creates mention if there is a user mentioned' do
    comment.body_markdown = 'Hello @#{user.username}, you are cool.'
    comment.save
    Mention.create_all_without_delay(comment)
    expect(Mention.all.size).to eq(1)
  end
    
        #{Faker::Hipster.paragraph(2)}
    #{Faker::Markdown.random}
    #{Faker::Hipster.paragraph(2)}
  MARKDOWN