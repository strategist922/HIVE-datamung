Meta VERSION="1" .
Job JOBID="job_201306242247_0005" JOBNAME="INSERT OVERWRITE TABLE join\.\.\.c\.impressionId(Stage-1)" USER="hadoop" SUBMIT_TIME="1372114979073" JOBCONF="hdfs://10\.114\.73\.81:9000/mnt/var/lib/hadoop/tmp/mapred/staging/hadoop/\.staging/job_201306242247_0005/job\.xml" VIEW_JOB="*" MODIFY_JOB="*" JOB_QUEUE="default" .
Job JOBID="job_201306242247_0005" JOB_PRIORITY="NORMAL" .
Job JOBID="job_201306242247_0005" LAUNCH_TIME="1372114979155" TOTAL_MAPS="2" TOTAL_REDUCES="1" JOB_STATUS="PREP" .
Task TASKID="task_201306242247_0005_m_000003" TASK_TYPE="SETUP" START_TIME="1372114980754" SPLITS="" .
MapAttempt TASK_TYPE="SETUP" TASKID="task_201306242247_0005_m_000003" TASK_ATTEMPT_ID="attempt_201306242247_0005_m_000003_0" START_TIME="1372114982700" TRACKER_NAME="tracker_10\.145\.202\.144:localhost/127\.0\.0\.1:40052" HTTP_PORT="9103" .
MapAttempt TASK_TYPE="SETUP" TASKID="task_201306242247_0005_m_000003" TASK_ATTEMPT_ID="attempt_201306242247_0005_m_000003_0" TASK_STATUS="SUCCESS" FINISH_TIME="1372114988721" HOSTNAME="/default-rack/10\.145\.202\.144" STATE_STRING="setup" COUNTERS="{(FileSystemCounters)(FileSystemCounters)[(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(51805)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(87130112)][(SPILLED_RECORDS)(Spilled Records)(0)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(130)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(59506688)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(918597632)]}" .
Task TASKID="task_201306242247_0005_m_000003" TASK_TYPE="SETUP" TASK_STATUS="SUCCESS" FINISH_TIME="1372114989764" COUNTERS="{(FileSystemCounters)(FileSystemCounters)[(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(51805)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(87130112)][(SPILLED_RECORDS)(Spilled Records)(0)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(130)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(59506688)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(918597632)]}" .
Job JOBID="job_201306242247_0005" JOB_STATUS="RUNNING" .
Task TASKID="task_201306242247_0005_m_000000" TASK_TYPE="MAP" START_TIME="1372114989765" SPLITS="/default-rack/ip-10-145-202-144\.ec2\.internal" .
Task TASKID="task_201306242247_0005_m_000001" TASK_TYPE="MAP" START_TIME="1372114989838" SPLITS="/default-rack/ip-10-145-202-144\.ec2\.internal" .
MapAttempt TASK_TYPE="MAP" TASKID="task_201306242247_0005_m_000001" TASK_ATTEMPT_ID="attempt_201306242247_0005_m_000001_0" START_TIME="1372114992074" TRACKER_NAME="tracker_10\.147\.215\.71:localhost/127\.0\.0\.1:39183" HTTP_PORT="9103" .
MapAttempt TASK_TYPE="MAP" TASKID="task_201306242247_0005_m_000001" TASK_ATTEMPT_ID="attempt_201306242247_0005_m_000001_0" TASK_STATUS="SUCCESS" FINISH_TIME="1372115001443" HOSTNAME="/default-rack/10\.147\.215\.71" STATE_STRING="hdfs://10\.114\.73\.81:9000/mnt/hive_081/warehouse/tmp_clicks/000000_0:0+167257" COUNTERS="{(org\.apache\.hadoop\.mapred\.FileInputFormat$Counter)(File Input Format Counters )[(BYTES_READ)(Bytes Read)(0)]}{(FileSystemCounters)(FileSystemCounters)[(HDFS_BYTES_READ)(HDFS_BYTES_READ)(167656)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(193202)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)[(DESERIALIZE_ERRORS)(DESERIALIZE_ERRORS)(0)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(MAP_OUTPUT_MATERIALIZED_BYTES)(Map output materialized bytes)(141367)][(MAP_INPUT_RECORDS)(Map input records)(3850)][(SPILLED_RECORDS)(Spilled Records)(3850)][(MAP_OUTPUT_BYTES)(Map output bytes)(281050)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(258805760)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(3590)][(MAP_INPUT_BYTES)(Map input bytes)(0)][(SPLIT_RAW_BYTES)(SPLIT_RAW_BYTES)(229)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(304992256)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(872218624)][(MAP_OUTPUT_RECORDS)(Map output records)(3850)]}" .
Task TASKID="task_201306242247_0005_m_000001" TASK_TYPE="MAP" TASK_STATUS="SUCCESS" FINISH_TIME="1372115001864" COUNTERS="{(org\.apache\.hadoop\.mapred\.FileInputFormat$Counter)(File Input Format Counters )[(BYTES_READ)(Bytes Read)(0)]}{(FileSystemCounters)(FileSystemCounters)[(HDFS_BYTES_READ)(HDFS_BYTES_READ)(167656)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(193202)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)[(DESERIALIZE_ERRORS)(DESERIALIZE_ERRORS)(0)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(MAP_OUTPUT_MATERIALIZED_BYTES)(Map output materialized bytes)(141367)][(MAP_INPUT_RECORDS)(Map input records)(3850)][(SPILLED_RECORDS)(Spilled Records)(3850)][(MAP_OUTPUT_BYTES)(Map output bytes)(281050)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(258805760)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(3590)][(MAP_INPUT_BYTES)(Map input bytes)(0)][(SPLIT_RAW_BYTES)(SPLIT_RAW_BYTES)(229)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(304992256)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(872218624)][(MAP_OUTPUT_RECORDS)(Map output records)(3850)]}" .
Task TASKID="task_201306242247_0005_r_000000" TASK_TYPE="REDUCE" START_TIME="1372115001865" SPLITS="" .
MapAttempt TASK_TYPE="MAP" TASKID="task_201306242247_0005_m_000000" TASK_ATTEMPT_ID="attempt_201306242247_0005_m_000000_0" START_TIME="1372114989776" TRACKER_NAME="tracker_10\.145\.202\.144:localhost/127\.0\.0\.1:40052" HTTP_PORT="9103" .
MapAttempt TASK_TYPE="MAP" TASKID="task_201306242247_0005_m_000000" TASK_ATTEMPT_ID="attempt_201306242247_0005_m_000000_0" TASK_STATUS="SUCCESS" FINISH_TIME="1372115001951" HOSTNAME="/default-rack/10\.145\.202\.144" STATE_STRING="hdfs://10\.114\.73\.81:9000/mnt/hive_081/warehouse/tmp_impressions/000000_0:0+5591293" COUNTERS="{(org\.apache\.hadoop\.mapred\.FileInputFormat$Counter)(File Input Format Counters )[(BYTES_READ)(Bytes Read)(0)]}{(FileSystemCounters)(FileSystemCounters)[(HDFS_BYTES_READ)(HDFS_BYTES_READ)(5591697)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(3294545)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)[(DESERIALIZE_ERRORS)(DESERIALIZE_ERRORS)(0)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(MAP_OUTPUT_MATERIALIZED_BYTES)(Map output materialized bytes)(3242708)][(MAP_INPUT_RECORDS)(Map input records)(21565)][(SPILLED_RECORDS)(Spilled Records)(21565)][(MAP_OUTPUT_BYTES)(Map output bytes)(6155011)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(258805760)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(6710)][(MAP_INPUT_BYTES)(Map input bytes)(0)][(SPLIT_RAW_BYTES)(SPLIT_RAW_BYTES)(234)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(324001792)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(927457280)][(MAP_OUTPUT_RECORDS)(Map output records)(21565)]}" .
Task TASKID="task_201306242247_0005_m_000000" TASK_TYPE="MAP" TASK_STATUS="SUCCESS" FINISH_TIME="1372115004781" COUNTERS="{(org\.apache\.hadoop\.mapred\.FileInputFormat$Counter)(File Input Format Counters )[(BYTES_READ)(Bytes Read)(0)]}{(FileSystemCounters)(FileSystemCounters)[(HDFS_BYTES_READ)(HDFS_BYTES_READ)(5591697)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(3294545)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)[(DESERIALIZE_ERRORS)(DESERIALIZE_ERRORS)(0)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(MAP_OUTPUT_MATERIALIZED_BYTES)(Map output materialized bytes)(3242708)][(MAP_INPUT_RECORDS)(Map input records)(21565)][(SPILLED_RECORDS)(Spilled Records)(21565)][(MAP_OUTPUT_BYTES)(Map output bytes)(6155011)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(258805760)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(6710)][(MAP_INPUT_BYTES)(Map input bytes)(0)][(SPLIT_RAW_BYTES)(SPLIT_RAW_BYTES)(234)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(324001792)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(927457280)][(MAP_OUTPUT_RECORDS)(Map output records)(21565)]}" .
ReduceAttempt TASK_TYPE="REDUCE" TASKID="task_201306242247_0005_r_000000" TASK_ATTEMPT_ID="attempt_201306242247_0005_r_000000_0" START_TIME="1372115001863" TRACKER_NAME="tracker_10\.147\.215\.71:localhost/127\.0\.0\.1:39183" HTTP_PORT="9103" .
ReduceAttempt TASK_TYPE="REDUCE" TASKID="task_201306242247_0005_r_000000" TASK_ATTEMPT_ID="attempt_201306242247_0005_r_000000_0" TASK_STATUS="SUCCESS" SHUFFLE_FINISHED="1372115012562" SORT_FINISHED="1372115013057" FINISH_TIME="1372115020461" HOSTNAME="/default-rack/10\.147\.215\.71" STATE_STRING="reduce > reduce" COUNTERS="{(org\.apache\.hadoop\.hive\.ql\.exec\.Operator$ProgressCounter)(org\.apache\.hadoop\.hive\.ql\.exec\.Operator$ProgressCounter)[(CREATED_FILES)(CREATED_FILES)(1)]}{(org\.apache\.hadoop\.mapred\.FileOutputFormat$Counter)(File Output Format Counters )[(BYTES_WRITTEN)(Bytes Written)(0)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.FileSinkOperator$TableIdEnum)(org\.apache\.hadoop\.hive\.ql\.exec\.FileSinkOperator$TableIdEnum)[(TABLE_ID_1_ROWCOUNT)(TABLE_ID_1_ROWCOUNT)(21565)]}{(FileSystemCounters)(FileSystemCounters)[(FILE_BYTES_READ)(FILE_BYTES_READ)(3346640)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(3398444)][(S3_BYTES_WRITTEN)(S3_BYTES_WRITTEN)(5721604)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.JoinOperator$SkewkeyTableCounter)(org\.apache\.hadoop\.hive\.ql\.exec\.JoinOperator$SkewkeyTableCounter)[(SKEWJOINFOLLOWUPJOBS)(SKEWJOINFOLLOWUPJOBS)(0)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(REDUCE_INPUT_GROUPS)(Reduce input groups)(25415)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(REDUCE_SHUFFLE_BYTES)(Reduce shuffle bytes)(3384075)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(128196608)][(REDUCE_OUTPUT_RECORDS)(Reduce output records)(0)][(SPILLED_RECORDS)(Spilled Records)(25415)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(7250)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(59506688)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(954732544)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(REDUCE_INPUT_RECORDS)(Reduce input records)(25415)]}" .
Task TASKID="task_201306242247_0005_r_000000" TASK_TYPE="REDUCE" TASK_STATUS="SUCCESS" FINISH_TIME="1372115022901" COUNTERS="{(org\.apache\.hadoop\.hive\.ql\.exec\.Operator$ProgressCounter)(org\.apache\.hadoop\.hive\.ql\.exec\.Operator$ProgressCounter)[(CREATED_FILES)(CREATED_FILES)(1)]}{(org\.apache\.hadoop\.mapred\.FileOutputFormat$Counter)(File Output Format Counters )[(BYTES_WRITTEN)(Bytes Written)(0)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.FileSinkOperator$TableIdEnum)(org\.apache\.hadoop\.hive\.ql\.exec\.FileSinkOperator$TableIdEnum)[(TABLE_ID_1_ROWCOUNT)(TABLE_ID_1_ROWCOUNT)(21565)]}{(FileSystemCounters)(FileSystemCounters)[(FILE_BYTES_READ)(FILE_BYTES_READ)(3346640)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(3398444)][(S3_BYTES_WRITTEN)(S3_BYTES_WRITTEN)(5721604)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.JoinOperator$SkewkeyTableCounter)(org\.apache\.hadoop\.hive\.ql\.exec\.JoinOperator$SkewkeyTableCounter)[(SKEWJOINFOLLOWUPJOBS)(SKEWJOINFOLLOWUPJOBS)(0)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(REDUCE_INPUT_GROUPS)(Reduce input groups)(25415)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(REDUCE_SHUFFLE_BYTES)(Reduce shuffle bytes)(3384075)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(128196608)][(REDUCE_OUTPUT_RECORDS)(Reduce output records)(0)][(SPILLED_RECORDS)(Spilled Records)(25415)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(7250)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(59506688)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(954732544)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(REDUCE_INPUT_RECORDS)(Reduce input records)(25415)]}" .
Task TASKID="task_201306242247_0005_m_000002" TASK_TYPE="CLEANUP" START_TIME="1372115022905" SPLITS="" .
MapAttempt TASK_TYPE="CLEANUP" TASKID="task_201306242247_0005_m_000002" TASK_ATTEMPT_ID="attempt_201306242247_0005_m_000002_0" START_TIME="1372115022891" TRACKER_NAME="tracker_10\.147\.215\.71:localhost/127\.0\.0\.1:39183" HTTP_PORT="9103" .
MapAttempt TASK_TYPE="CLEANUP" TASKID="task_201306242247_0005_m_000002" TASK_ATTEMPT_ID="attempt_201306242247_0005_m_000002_0" TASK_STATUS="SUCCESS" FINISH_TIME="1372115029278" HOSTNAME="/default-rack/10\.147\.215\.71" STATE_STRING="cleanup" COUNTERS="{(FileSystemCounters)(FileSystemCounters)[(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(51803)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(89976832)][(SPILLED_RECORDS)(Spilled Records)(0)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(150)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(59506688)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(908873728)]}" .
Task TASKID="task_201306242247_0005_m_000002" TASK_TYPE="CLEANUP" TASK_STATUS="SUCCESS" FINISH_TIME="1372115031917" COUNTERS="{(FileSystemCounters)(FileSystemCounters)[(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(51803)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(89976832)][(SPILLED_RECORDS)(Spilled Records)(0)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(150)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(59506688)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(908873728)]}" .
Job JOBID="job_201306242247_0005" FINISH_TIME="1372115031917" JOB_STATUS="SUCCESS" FINISHED_MAPS="2" FINISHED_REDUCES="1" FAILED_MAPS="0" FAILED_REDUCES="0" MAP_COUNTERS="{(org\.apache\.hadoop\.mapred\.FileInputFormat$Counter)(File Input Format Counters )[(BYTES_READ)(Bytes Read)(0)]}{(FileSystemCounters)(FileSystemCounters)[(HDFS_BYTES_READ)(HDFS_BYTES_READ)(5759353)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(3487747)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)[(DESERIALIZE_ERRORS)(DESERIALIZE_ERRORS)(0)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(MAP_OUTPUT_MATERIALIZED_BYTES)(Map output materialized bytes)(3384075)][(MAP_INPUT_RECORDS)(Map input records)(25415)][(SPILLED_RECORDS)(Spilled Records)(25415)][(MAP_OUTPUT_BYTES)(Map output bytes)(6436061)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(517611520)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(10300)][(MAP_INPUT_BYTES)(Map input bytes)(0)][(SPLIT_RAW_BYTES)(SPLIT_RAW_BYTES)(463)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(628994048)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(1799675904)][(MAP_OUTPUT_RECORDS)(Map output records)(25415)]}" REDUCE_COUNTERS="{(org\.apache\.hadoop\.hive\.ql\.exec\.Operator$ProgressCounter)(org\.apache\.hadoop\.hive\.ql\.exec\.Operator$ProgressCounter)[(CREATED_FILES)(CREATED_FILES)(1)]}{(org\.apache\.hadoop\.mapred\.FileOutputFormat$Counter)(File Output Format Counters )[(BYTES_WRITTEN)(Bytes Written)(0)]}{(FileSystemCounters)(FileSystemCounters)[(FILE_BYTES_READ)(FILE_BYTES_READ)(3346640)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(3398444)][(S3_BYTES_WRITTEN)(S3_BYTES_WRITTEN)(5721604)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.FileSinkOperator$TableIdEnum)(org\.apache\.hadoop\.hive\.ql\.exec\.FileSinkOperator$TableIdEnum)[(TABLE_ID_1_ROWCOUNT)(TABLE_ID_1_ROWCOUNT)(21565)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(REDUCE_INPUT_GROUPS)(Reduce input groups)(25415)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(REDUCE_SHUFFLE_BYTES)(Reduce shuffle bytes)(3384075)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(128196608)][(REDUCE_OUTPUT_RECORDS)(Reduce output records)(0)][(SPILLED_RECORDS)(Spilled Records)(25415)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(59506688)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(7250)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(954732544)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(REDUCE_INPUT_RECORDS)(Reduce input records)(25415)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.JoinOperator$SkewkeyTableCounter)(org\.apache\.hadoop\.hive\.ql\.exec\.JoinOperator$SkewkeyTableCounter)[(SKEWJOINFOLLOWUPJOBS)(SKEWJOINFOLLOWUPJOBS)(0)]}" COUNTERS="{(org\.apache\.hadoop\.hive\.ql\.exec\.Operator$ProgressCounter)(org\.apache\.hadoop\.hive\.ql\.exec\.Operator$ProgressCounter)[(CREATED_FILES)(CREATED_FILES)(1)]}{(org\.apache\.hadoop\.mapred\.FileInputFormat$Counter)(File Input Format Counters )[(BYTES_READ)(Bytes Read)(0)]}{(org\.apache\.hadoop\.mapred\.JobInProgress$Counter)(Job Counters )[(SLOTS_MILLIS_MAPS)(SLOTS_MILLIS_MAPS)(33952)][(TOTAL_LAUNCHED_REDUCES)(Launched reduce tasks)(1)][(FALLOW_SLOTS_MILLIS_REDUCES)(Total time spent by all reduces waiting after reserving slots \\(ms\\))(0)][(RACK_LOCAL_MAPS)(Rack-local map tasks)(2)][(FALLOW_SLOTS_MILLIS_MAPS)(Total time spent by all maps waiting after reserving slots \\(ms\\))(0)][(TOTAL_LAUNCHED_MAPS)(Launched map tasks)(2)][(SLOTS_MILLIS_REDUCES)(SLOTS_MILLIS_REDUCES)(18598)]}{(org\.apache\.hadoop\.mapred\.FileOutputFormat$Counter)(File Output Format Counters )[(BYTES_WRITTEN)(Bytes Written)(0)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.FileSinkOperator$TableIdEnum)(org\.apache\.hadoop\.hive\.ql\.exec\.FileSinkOperator$TableIdEnum)[(TABLE_ID_1_ROWCOUNT)(TABLE_ID_1_ROWCOUNT)(21565)]}{(FileSystemCounters)(FileSystemCounters)[(FILE_BYTES_READ)(FILE_BYTES_READ)(3346640)][(HDFS_BYTES_READ)(HDFS_BYTES_READ)(5759353)][(FILE_BYTES_WRITTEN)(FILE_BYTES_WRITTEN)(6886191)][(S3_BYTES_WRITTEN)(S3_BYTES_WRITTEN)(5721604)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)(org\.apache\.hadoop\.hive\.ql\.exec\.MapOperator$Counter)[(DESERIALIZE_ERRORS)(DESERIALIZE_ERRORS)(0)]}{(org\.apache\.hadoop\.hive\.ql\.exec\.JoinOperator$SkewkeyTableCounter)(org\.apache\.hadoop\.hive\.ql\.exec\.JoinOperator$SkewkeyTableCounter)[(SKEWJOINFOLLOWUPJOBS)(SKEWJOINFOLLOWUPJOBS)(0)]}{(org\.apache\.hadoop\.mapred\.Task$Counter)(Map-Reduce Framework)[(MAP_OUTPUT_MATERIALIZED_BYTES)(Map output materialized bytes)(3384075)][(MAP_INPUT_RECORDS)(Map input records)(25415)][(REDUCE_SHUFFLE_BYTES)(Reduce shuffle bytes)(3384075)][(SPILLED_RECORDS)(Spilled Records)(50830)][(MAP_OUTPUT_BYTES)(Map output bytes)(6436061)][(COMMITTED_HEAP_BYTES)(Total committed heap usage \\(bytes\\))(577118208)][(CPU_MILLISECONDS)(CPU time spent \\(ms\\))(17550)][(MAP_INPUT_BYTES)(Map input bytes)(0)][(SPLIT_RAW_BYTES)(SPLIT_RAW_BYTES)(463)][(COMBINE_INPUT_RECORDS)(Combine input records)(0)][(REDUCE_INPUT_RECORDS)(Reduce input records)(25415)][(REDUCE_INPUT_GROUPS)(Reduce input groups)(25415)][(COMBINE_OUTPUT_RECORDS)(Combine output records)(0)][(PHYSICAL_MEMORY_BYTES)(Physical memory \\(bytes\\) snapshot)(757190656)][(REDUCE_OUTPUT_RECORDS)(Reduce output records)(0)][(VIRTUAL_MEMORY_BYTES)(Virtual memory \\(bytes\\) snapshot)(2754408448)][(MAP_OUTPUT_RECORDS)(Map output records)(25415)]}" .
