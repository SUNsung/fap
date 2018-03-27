
        
            context 'GIT repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(true)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(false)
      end
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
            path = File.join save_to, name.sub(/\.less$/, '.scss')
        path = File.join File.dirname(path), '_' + File.basename(path)
        save_file(path, file)
        log_processed File.basename(path)
      end